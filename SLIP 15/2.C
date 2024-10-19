#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;
}*top;

void push(int value)
{
struct node *newnode;
newnode=(struct node *)malloc(sizeof(struct node));
newnode->data=value;
newnode->next=NULL;

if(top==NULL)
{
top=newnode;
}
else
{
newnode->next=top;
top=newnode;
}
printf("\nInsertion success...");
}

void pop()
{
if(top==NULL)
{
printf("\nStack is empty...");
}
else
{
struct node *temp=top;
top=top->next;
printf("\nDeleted element is %d",temp->data);
free(temp);
}
}

void display()
{
if(top==NULL)
{
printf("\nStack is empty....");
}
else
{
struct node *temp=top;
while(temp!=NULL)
{
printf("%d->",temp->data);
temp=temp->next;
}
printf("X");
}
}

void main()
{
int ch,value;
clrscr();
while(1)
{
printf("\n1.Push");
printf("\n2.Pop");
printf("\n3.Display");
printf("\n4,Exit");
printf("\n\nEnter your choice : ");
scanf("%d",&ch);

switch(ch)
{
case 1:
printf("\nEnter value to be insert : ");
scanf("%d",&value);
push(value);
break;

case 2 :
pop();
break;

case 3:
display();
break;

case 4:
exit(0);

default :
printf("\nInvalid choice...");
}
}
}