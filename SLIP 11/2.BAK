#include<stdio.h>
#include<stdlib.h>

struct queue
{
int data;
struct queue *next;
}*front,*rear;

void insert(int n)
{
struct queue *temp;
temp=(struct queue *)malloc(sizeof(struct queue));
temp->data=n;
temp->next=NULL;

if(front==NULL)
rear=front=temp;
else
rear->next=temp;
rear=temp;
}

int deleteq()
{
int x;
struct queue *temp=front;
x=front->data;
if(front==rear)
front=rear=NULL;
else
front=front->next;
free(temp);
return(x);
}

void display()
{
struct queue *temp=front;
printf("\nQueue contents are : \n");
while(temp)
{
printf("%d\t",temp->data);
temp=temp->next;
}
}

void main()
{
int ch,x;
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
case 1:printf("\nEnter element to be insert : ");
	scanf("%d",&x);
	insert(x);
	printf("\nElement inserted...");
	break;

case 2:if(front==NULL)
	printf("\nQueue is empty....");
	else
	printf("\nDeleted element is %d ",deleteq());
	break;

case 3:display();
	break;

case 4:exit(0);

}
}while(ch>=0 && ch<5);
}