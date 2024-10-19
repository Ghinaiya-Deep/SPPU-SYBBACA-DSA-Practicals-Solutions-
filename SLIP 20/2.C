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
printf("\n2.Swap mth and nth element");
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
scanf("%d",newnode->data);
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


void swap()
{
node *mth,*nth,*temp;
int t,ctr=countnode(start);
int m,n,i,j;
if(start==NULL)
{
printf("\nEmpty list....");
}
else
{
printf("\nEnter first element : ");
scanf("%d",&m);
if(m>0 && m<=ctr)
{
printf("\nEnter second element : ");
scanf("%d",&n);
if(n>0 && n<=ctr && m!=n)
{
m--,n--;
nth=start;

for(i=1;i<=n;i++)
{
nth=nth->next;
}
for(j=1;j<=m;j++)
{
mth=mth->next;
}

t=nth->data;
nth->data=mth->data;
mth->data=t;
printf("\nSwapping completed....");
}

else
{
printf("\nInvalid position...");
}
}
else
{
printf("\nInvalid position...");
}
}
getch();
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
printf("\nList created....");
}
break;

case 2:
swap();
break;

case 3:
exit(0);

default :
printf("\nINVALID CHOICE....");
break;

}
getch();
}
}
