#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct dlinklist
{
struct dlinklist *left;
int data;
struct dlinklist *right;
};

typedef struct dlinklist node;
node *start=NULL;

node *getnode()
{
node *newnode;
newnode=(node *)malloc(sizeof(node));
printf("\nEnter Data : ");
scanf("%d",&newnode->data);
newnode->left=NULL;
newnode->right=NULL;
return newnode;
}

int menu()
{
int ch;
clrscr();
printf("\n1.Create");
printf("\n2.Traverse the list from left to right");
printf("\n3.Traverse the list from right to left");
printf("\n4.Exit");
printf("\n\nEnter your choice : ");
scanf("%d",&ch);
return ch;
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
while(temp->right)
temp=temp->right;
temp->right=newnode;
newnode->left=temp;
}
}
}

void traverse()
{
node *temp;
temp=start;
printf("\nThe list is :\n ");
if(start==NULL)
{
printf("\nEmpty list...");
}
else
{
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->right;
}
}
}

void rev_traverse()
{
node *temp;
temp=start;
printf("\nThe list is :\n ");
if(start==NULL)
{
printf("\nEmpty list....");
}
else
{
while(temp->right!=NULL)
temp=temp->right;
}
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->left;
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
printf("\nEnter size of list : ");
scanf("%d",&n);
createlist(n);
printf("\nList created...");
break;

case 2:
traverse();
break;

case 3:
rev_traverse();
break;

case 4:
exit(0);

default :
printf("\nINVALID CHOICES....");
break;

}
getch();
}
}
