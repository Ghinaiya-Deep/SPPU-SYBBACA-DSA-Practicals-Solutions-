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
printf("\n2.Traverse list (Left to Right) ");
printf("\n3.Traverse list (Right to Left)" );
printf("\n4.Insert at End");
printf("\n5.Delete From specific position");
printf("\n6.Exit");
printf("\n\nEnter Your Choice : ");
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
printf("\nEmpy list....");
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

void insert_at_end()
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

void delete_at_mid()
{
int ctr=1,pos,nodectr;
node *temp,*prev;
if(start==NULL)
{
printf("\nEmpty list.....");
return;
}
else
{
printf("\nEnter position of node to delete : ");
scanf("%d",&pos);
nodectr=countnode(start);
if(pos>nodectr)
{
printf("\nThis node doesnot exist");
}
if(pos>1 && pos<nodectr)
{
temp=prev=start;
while(ctr<pos)
{
prev=temp;
temp=temp->next;
ctr++;
}
prev->next=temp->next;
free(temp);
printf("\nNode deleted...");
}
else
{
printf("\nInvalid position....");
getch();
}
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
if(start==NULL)
{
printf("\nEnter number of nodes : ");
scanf("%d",&n);
createlist(n);
printf("\nList created....");
}
else
{
printf("\nList already created.....");
}
break;

case 2:
traverse();
break;

case 3:
printf("\nThe Conetents of list (Right to Left) : \n");
rev_traverse(start);
printf("X");
break;

case 4:
insert_at_end();
break;

case 5:
delete_at_mid();
break;

case 6:
exit(0);

default:
printf("\nINVALID CHOICES....");
break;
}
getch();
}
}