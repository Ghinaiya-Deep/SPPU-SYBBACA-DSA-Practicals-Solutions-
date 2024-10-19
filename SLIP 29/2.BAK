#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct cslinklist
{
int data;
struct cslinklist *next;
};

typedef struct cslinklist node;
node *start=NULL;
int nodectr;

node *getnode()
{
node *newnode;
newnode=(node *)malloc(sizeof(node));
printf("\nEnter Data : ");
scanf("%d",&newnode->data);
newnode->next=NULL;
return newnode;
}

int menu()
{
int ch;
clrscr();
printf("\n1.Create");
printf("\n2.Display");
printf("\n3.Exit");
printf("\n\nEnter Your Choice : " );
scanf("%d",&ch);
return ch;
}

void createlist(int n)
{
int i;
node *temp,*newnode;
nodectr=n;
for(i=0;i<n;i++)
{
newnode=getnode();
if(start==NULL)
{
start=newnode;
}
else
{
temp=start;
while(temp->next!=NULL)
temp=temp->next;
temp->next=newnode;
}
}
newnode->next=start;
}

void display()
{
node *temp;
temp=start;
printf("\nThe contents of list : \n");
if(start==NULL)
{
printf("\nEmpty list....");
}
else
{
do
{
printf("%d->",temp->data);
temp=temp->next;
}while(temp!=start);
printf("X");
}
}

void main(void)
{
int ch,n;
clrscr();
while(1)
{
ch=menu();
switch(ch)
{
case 1:
if(start==NULL)
{
printf("\nEnter number of nodes to create : ");
scanf("%d",&n);
createlist(n);
printf("\nList created.....");
}
else
{
printf("\nList already created....");
}break;

case 2:
display();
break;

case 3:
exit(0);

default:
printf("\nInvalid choice....");
break;
}
getch();
}
}