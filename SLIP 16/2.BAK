#include<stdio.h>
#include<conio.h>

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
printf("\n2.Search the number");
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
return flag=1;
}
temp=temp->next;
}
}
return flag;
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
printf("\nEnter number of node : ");
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
printf("\nEnter number to be search : ");
scanf("%d",&key);
r=search(key);
if(r==1)
{
printf("\nElement found....");
}
else
{
printf("\nElement not found...");
}
break;

case 3:
exit(0);

default : printf("\nINVALID CHOICES....");
break;

}
getch();
}
}