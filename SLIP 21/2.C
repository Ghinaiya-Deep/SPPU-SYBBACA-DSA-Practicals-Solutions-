#include<stdio.h>
#include<conio.h>
#define SIZE 10

int linearsearch(int a[SIZE],int n,int s)
{
int i;
for(i=0;i<n;i++)
{
if(a[i]==s)
{
return i;
}
}
return -1;
}

void main()
{
int n,i,search,pos;
int a[SIZE];
int linearsearch(int a[SIZE],int n,int s);
clrscr();

printf("\nEnter number of elements in array : ");
scanf("%d",&n);
printf("\nEnter %d elements : ",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

printf("\nEnter number to be search in array : ");
scanf("%d",&search);

pos=linearsearch(a,n,search);
if(pos==-1)
{
printf("\n%d is not present ",search);
}
else
{
printf("\n%d is present at %d position",search,pos);
}
getch();
return 0;
}

