

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 30

int top=-1,value;
char string[MAX];
void push(char value);
char pop(void);
int isempty(void);
int isfull(void);

int isempty()
{
if(top==-1)
return 1;
else
return 0;
}

int isfull()
{
if(top==MAX-1)
return 1;
else
return 0;
}

void push(char value)
{
if(isfull())
{
printf("\nStack is Full....");
return;
}
else
{
top=top+1;
string[top]=value;
}
}

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
printf("\nEnter String : ");
scanf("%[^\n]s",str);
for(i=0;i<strlen(str);i++)
push(str[i]);
for(i=0;i<strlen(str);i++)
str[i]=pop();
printf("\nReversed string is  %s\n",str);
getch();
return 0;
}
