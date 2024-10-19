#include<stdio.h>
#include<conio.h>
#include<string.h>
int top=-1;
char stack[100];

void push(char a)
{
stack[top]=a;
top++;
}

void pop()
{
if(top==-1)
{
printf("\nExpression is Invalid....");
exit(0);
}
else
{
top--;
}
}

int main()
{
int i;
char a[100];
clrscr();
printf("\nEnter Expression : ");
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='(')
{
push(a[i]);
}
else if(a[i]==')')
{
pop();
}
}

if(top==-1)
{
printf("\nExpression is parenthesized");
}
else
{
printf("\nExpression is not parenthesized");
}
getch();
return 0;
}
