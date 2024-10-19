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

int menu()
{
int ch;
clrscr();
printf("\n1.Create");
printf("\n2.Display list (Left to Right) " );
printf("\n3.Exit");
printf("\n\nEnter your choice : ");
scanf("%d",&ch);
return ch;
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
printf("\nThe Contents of list : \n" );
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
printf("\nEnter Number of nodes : ");
scanf("%d",&n);
createlist(n);
printf("\nList created....");
}
else
{
printf("\nList is already created...");
}
break;

case 2:
display();
break;

case 3:
exit(0);

default:
printf("\nINVALID CHOICE...");
break;

}
getch();
}
}