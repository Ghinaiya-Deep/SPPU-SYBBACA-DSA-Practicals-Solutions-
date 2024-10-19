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

void count()
{
int i=0,even=0,odd=0;
node *temp;
temp=start;
while(temp!=NULL)
{
if(temp->data==0)
{
i++;
}

if(temp->data%2==0 && temp->data!=0)
{
even++;
}

else if(temp->data%2==1)
{
odd++;
}
temp=temp->next;
}
printf("\nNon-Zero elements : %d\n",i);
printf("\nEven element : %d\n",even);
printf("\nOdd element : %d\n",odd);
}

void display()
{
node *temp;
temp=start;
if(start==NULL)
{
printf("\nEmpty list...");
}
else
{
while(temp->next!=NULL)
{
printf("%d\t",temp->data);
temp=temp->next;
}
printf("%d\n",temp->data);
}
}

void main()
{
clrscr();
createlist(6);
printf("\nList created....\n");
display();
count();
getch();
}
