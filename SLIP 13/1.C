

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

// Function to check if a character is an operator
int isOpe(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

// Function to determine the precedence of an operator
int pre(char ope) {
    if (ope == '+' || ope == '-')
	return 1;
    if (ope == '*' || ope == '/')
	return 2;
    return 0; // Lower precedence
}

// Function to convert infix to postfix expression
void infixToPostfix(char infix[], char postfix[]) {
    char stack[MAX_SIZE];
    int top = -1; // Initialize stack top to -1
    int i, j = 0; // Initialize postfix index to 0

    for (i = 0; infix[i] != '\0'; i++) {
	char ch = infix[i];

	if (isalnum(ch)) {
	    // If it's an operand, add it to the postfix expression
	    postfix[j++] = ch;
	} else if (ch == '(') {
	    // If it's an open parenthesis, push it onto the stack
	    stack[++top] = ch;
	} else if (ch == ')') {
	    // If it's a close parenthesis, pop operators from the stack
	    // and append them to the postfix expression until an open parenthesis is encountered
	    while (top != -1 && stack[top] != '(') {
		postfix[j++] = stack[top--];
	    }
	    if (top != -1 && stack[top] == '(') {
		top--; // Pop the open parenthesis
	    }
	} else if (isOpe(ch)) {
	    // If it's an operator, pop operators from the stack
	    // and append them to the postfix expression while they have higher or equal precedence
	    while (top != -1 && pre(stack[top]) >= pre(ch)) {
		postfix[j++] = stack[top--];
	    }
	    // Push the current operator onto the stack
	    stack[++top] = ch;
	}
    }

    // Pop any remaining operators from the stack and append them to the postfix expression
    while (top != -1) {
	postfix[j++] = stack[top--];
    }

    postfix[j] = '\0'; // Null-terminate the postfix expression
}

int main() {
    char infix[MAX_SIZE];
    char postfix[MAX_SIZE];
    clrscr();
    printf("Enter an infix expression: ");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);

    printf("Postfix expression: %s\n", postfix);
    getch();
    return 0;
}







