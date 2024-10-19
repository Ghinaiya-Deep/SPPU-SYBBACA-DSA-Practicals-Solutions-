#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;
};

struct node *front=NULL;
struct node *rear=NULL;

void insert(int d)
{
struct node *n;
n=(struct node *)malloc(sizeof(struct node));
n->data=d;
n->next=NULL;
if((rear==NULL) && (front==NULL))
{
front=rear=n;
rear->next=front;
}
else
{
rear->next=n;
rear=n;
n->next=front;
}
}

void deleteq()
{
struct node *t;
t=front;
if((front==NULL) && (rear==NULL))
{
printf("\nQueue is empty...");
}
else if(front==rear)
{
front=rear=NULL;
free(t);
}
else
{
front=front->next;
rear->next=front;
free(t);
}
}

void display()
{
struct node *t;
t=front;
if((front==NULL) && (rear==NULL))
{
printf("\nQueue is empty....");
}
else
{
do
{
printf("%d\t",t->data);
t=t->next;
}while(t!=front);
}
}

int main()
{
int ch,n,i,data;
clrscr();
do
{
printf("\n1.Insert");
printf("\n2.Delete");
printf("\n3.Display");
printf("\n4.Exit");
printf("\n\nEnter your choice : ");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("\nEnter data to insert : ");
scanf("%d",&data);
insert(data);
printf("\nElement inserted...");
break;

case 2:
deleteq();
printf("\nElement deleted..");
break;

case 3:
display();
break;

case 4:
exit(0);

default :
printf("\nINVALID CHOICE...");
}
}while(ch!=4);
getch();
return 0;
}
