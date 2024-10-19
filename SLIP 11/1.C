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
printf("\n2.Traverse list (Left to Right)");
printf("\n3.Traverse list (Right to Left)");
printf("\n4.Search Node in list");
printf("\n5.Insert at last position");
printf("\n6.Exit");
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

void createlist(int n)
{
int i;
node *temp,*newnode;
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
printf("\nThe contents of list (Left to Right) : \n");
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

int search(int key)
{
node *temp=start;
int flag=0;
if(start!=NULL)
{
while(temp!=NULL)
{
if(temp->data==key)
{
return flag=1;y
}
temp=temp->next;
}
}
return flag;
}

void insert_at_last()
{
node *newnode,*temp;
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

void main(void)
{
int ch,n,r,key;
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
printf("\nList created....");
}
else
{
printf("\nList is already created....");
}
break;

case 2:
traverse();
break;

case 3:
printf("\nThe contents of list (Right to Left) : \n");
rev_traverse(start);
printf("X");
break;

case 4:
printf("\nEnter number to search : ");
scanf("%d",&key);
r=search(key);
if(r==1)
printf("\nElement found....");
else
printf("\nElement Not  found...");
break;


case 5:
insert_at_last();
break;


case 6:
exit(0);

default : printf("\nINVALID CHOICE....");
break;

}
getch();
}
}



















