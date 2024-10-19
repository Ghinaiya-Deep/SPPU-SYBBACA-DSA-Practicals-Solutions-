#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct slinklist
{
struct slinklist *next;
int data;
};

typedef struct slinklist node;
node *newnode,*temp;

node *getnode(int no)
{
newnode=(node *)malloc(sizeof(node));
newnode->data=no;
newnode->next=NULL;
return newnode;
}

node *create(node *start,node *newnode)
{
if(start==NULL)
{
start=newnode;
}
else
{
newnode->next=start;
start=newnode;
}
return start;
}

void display(node *start)
{
temp=start;
if(start==NULL)
{
printf("\nList is empty...");
}
else
{
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->next;
}
}
}

int main()
{
node *start=NULL;
int no,dig;
clrscr();
printf("\nEnter Number : ");
scanf("%d",&no);
while(no>0)
{
newnode=getnode(no % 10);
start=create(start,newnode);
no=no/10;
}
display(start);
getch();
return 0;
}