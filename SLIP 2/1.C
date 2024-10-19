#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 30

//stack variable
int top=-1,value;
//string declaration
char string[MAX];
void push(char value);
char pop(void);
int isempty(void);
int isfull(void);

//isempty
int isempty()
{
if(top==-1)
{
return 1;
}
else
{
return 0;
}
}

//isfull
int isfull()
{
if(top==MAX-1)
{
return 1;
}
else
{
return 0;
}
}

//push
void push(char value)
{
if(isfull())
{
printf("\nStack is full....");
return;
}
else
{
top=top+1;
string[top]=value;
}
}

//pop
char pop()
{
if(isempty())
{
printf("\nStack is empty....");
}
else
{
value=string[top];
top=top-1;
}
return value;
}

int main()
{
char str[MAX];
int i;
clrscr();
printf("\nEnter string : ");
scanf("%[^\n]s",&str);
for(i=0;i<strlen(str);i++)
push(str[i]);
for(i=0;i<strlen(str);i++)
str[i]=pop();
printf("\nReversed string is %s ",str);
getch();
return 0;
}
