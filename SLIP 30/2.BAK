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
printf("\n1.Create");
printf("\n2.Display list in ascending order");
printf("\n3.Exit");
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

void display()
{
node *temp;
temp=start;
if(start==NULL)
{
printf("\nEmpty list...");
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

void sort()
{
int i,t;
node *temp,*next;
for(temp=start;temp->next!=NULL;temp=temp->next)
{
for(next=temp->next;next!=NULL;next=next->next)
{
if(temp->data > next->data)
{
t=temp->data;
temp->data=next->data;
next->data=t;
}
}
}
}

int main()
{
clrscr();
createlist(6);
printf("\nOriginal list is : ");
display();
printf("\n\nSorted list is : ");
sort();
display();
getch();
return 0;
}