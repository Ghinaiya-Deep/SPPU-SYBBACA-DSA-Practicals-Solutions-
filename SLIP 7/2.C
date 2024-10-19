#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct slinklist
{
int data;
struct slinklist *next;
};

typedef struct slinklist node;
node *start=NULL;

int menu()
{
int ch;
clrscr();
printf("\n1.Create a list");
printf("\n2.Count nodes");
printf("\n3.Traverse list (Left to Right)");
printf("\n4.Traverse list (Right to Left)");
printf("\n5.Exit");
printf("\n\nEnter your choice : ");
scanf("%d",&ch);
return ch;
}

node *getnode()
{
node *newnode;
newnode=(node *)malloc(sizeof(node));
printf("\nEnter Data : ");
scanf("%d",&newnode->data);
newnode->next=NULL;
return newnode;
}

int countnode(node *start)
{
int count=0;
while(start!=NULL)
{
count++;
start=start->next;
}
return(count);
}

void createlist(int n)
{
int i;
node *newnode,*temp;
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
}

void traverse()
{
node *temp;
temp=start;
printf("\nThe Contents of list (Left to Right) : \n");
if(start==NULL)
{
printf("\nEmpty list....");
return;
}
else
{
while(temp!=NULL)
{
printf("%d->",temp->data);
temp=temp->next;
}
}
printf("X");
}

void rev_traverse(node *start)
{
if(start==NULL)
{
return;
}
else
{
rev_traverse(start->next);
printf("%d->",start->data);
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
case 1:if(start==NULL)
	{
	printf("\nEnter number of nodes : ");
	scanf("%d",&n);
	createlist(n);
	printf("\nList created...");
	}
	else
	{
	printf("\nList is already created...");
	}
	break;

case 2: printf("\nTotal number of nodes is : %d",countnode(start));
	break;

case 3: traverse();
	break;

case 4:printf("\nThe Contents of list (Right to Left) : \n");
	rev_traverse(start);
	printf("X");
	break;

case 5: exit(0);

default : printf("\nINVALID CHOICES.....");
	break;

}
getch();
}
}

