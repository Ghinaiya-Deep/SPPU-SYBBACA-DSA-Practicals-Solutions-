#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5

int cqueue[MAX];
int front=-1;
int rear=-1;

void insert(int item)
{
if((front==0 && rear==MAX-1) || (front==rear+1))
{
printf("\nQueue Overflow..");
return;
}
if(front==-1)
{
front=0;
rear=0;
}
else
{
if(rear==MAX-1)
rear=0;
else
rear=rear+1;
}
cqueue[rear]=item;
}

void del()
{
if(front==-1)
{
printf("\nQueue Underflow...");
return;
}
printf("\nElement deleted from queue is %d",cqueue[front]);
if(front==rear)
{
front=rear=-1;
}
else
{
if(front==MAX-1)
front=0;
else
front=front+1;
}
}


void display()
{
int front_pos=front,rear_pos=rear;
if(front==-1)
{
printf("\nQueue is empty...");
return;
}

printf("\nQueue elements are : \n");
if(front_pos<=rear_pos)
while(front_pos<=rear_pos)
{
printf("%d\t",cqueue[front_pos]);
front_pos++;
}
else
{
while(front_pos<=MAX-1)
{
printf("%d\t",cqueue[front_pos]);
front_pos++;
}
front_pos=0;

while(front_pos<=rear_pos)
{
printf("%d\t",cqueue[front_pos]);
front_pos++;
}
}
printf("\n");
}

int main()
{
int ch,item;
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
printf("\nEnter element for insertion in queue : ");
scanf("%d",&item);
insert(item);
break;

case 2:
del();
break;

case 3:
display();
break;

case 4:
exit(0);

default:
printf("\nINVALID CHOICE....");
break;
}
}
while(ch!=4);
getch();
return 0;
}