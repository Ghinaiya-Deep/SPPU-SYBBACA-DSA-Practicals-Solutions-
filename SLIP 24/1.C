#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Define a stack structure
struct Stack {
    int *data;
    int top;
    int capacity;
};

// Initialize the stack
struct Stack* initialize(int capacity) {
    struct Stack *stack = (struct Stack*)malloc(sizeof(struct Stack));
    if (stack == NULL) {
        printf("Memory allocation error\n");
        exit(1);
    }
    stack->data = (int*)malloc(sizeof(int) * capacity);
    if (stack->data == NULL) {
        printf("Memory allocation error\n");
        exit(1);
    }
    stack->top = -1;
    stack->capacity = capacity;
    return stack;
}

// Check if the stack is empty
int isEmpty(struct Stack *stack) {
    return stack->top == -1;
}

// Check if the stack is full
int isFull(struct Stack *stack) {
    return stack->top == stack->capacity - 1;
}

// Push an element onto the stack
void push(struct Stack *stack, int value) {
    if (isFull(stack)) {
        printf("Stack overflow\n");
        exit(1);
    }
    stack->data[++stack->top] = value;
}

// Pop an element from the stack
int pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow\n");
        exit(1);
    }
    return stack->data[stack->top--];
}

// Evaluate a postfix expression
int evaluatePostfix(char postfix[])
{
int i,result;
    struct Stack *stack = initialize(100); // Initial capacity is 100

    for ( i = 0; postfix[i] != '\0'; i++) {
	if (isdigit(postfix[i])) {
	    push(stack, postfix[i] - '0'); // Convert character to integer
	}
	 else
	{
	    int operand2 = pop(stack);
	    int operand1 = pop(stack);

	    switch (postfix[i])
	    {

		case '+':
		    push(stack, operand1 + operand2);
		    break;
		case '-':
		    push(stack, operand1 - operand2);
		    break;
		case '*':
		    push(stack, operand1 * operand2);
		    break;
		case '/':
		    push(stack, operand1 / operand2);
		    break;
		default:
		    printf("Invalid operator: %c\n", postfix[i]);
		    exit(1);
	    }
	}
    }

    result = pop(stack);
    free(stack->data);
    free(stack);

    return result;
}

int main()
{
    char postfix[100];
    int result;
    clrscr();
    printf("Enter a postfix expression: ");
    scanf("%s", postfix);

     result = evaluatePostfix(postfix);
    printf("Result: %d\n", result);
    getch();
    return 0;

}