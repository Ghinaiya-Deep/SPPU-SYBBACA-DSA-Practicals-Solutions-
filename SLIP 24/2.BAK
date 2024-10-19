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
printf("\n2.Delete at end");
printf("\n3.Insert at beginning");
printf("\n4.Exit");
printf("\n\nEnter Your Choice : ");
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

 void delete_at_end()
 {
 node *temp;
 if(start==NULL)
 {
 printf("\nNo nodes are exist...");
 return;
 }
 else
 {
 temp=start;
 start=temp->next;
 free(temp);
 printf("\nNode deleted...");
 }
 }

 void insert_at_beg()
 {
 node *newnode;
 newnode=getnode();
 if(start==NULL)
 {
 start=newnode;
 }
 else
 {
 newnode->next=start;
 start=newnode;
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
delete_at_end();
break;

case 3:
insert_at_beg();
break;

case 4:
exit(0);
break;

default :
printf("\nINVALID CHOICES...");
break;
}
getch();
}
}