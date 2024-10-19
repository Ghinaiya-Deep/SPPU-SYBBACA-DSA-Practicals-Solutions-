#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
int n,i,num,pcount=0,ncount=0;
int *pos=(int *)malloc(n * sizeof(int));
int *neg=(int *)malloc(n * sizeof(int));
clrscr();

if(pos==NULL || neg==NULL)
{
printf("\nMemory allocation failed....");
return 1;
}


printf("\nEnter number of integer : ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter %d integer : ",i+1);
scanf("%d",&num);

if(num>=0)
{
pos[pcount++]=num;
}
else
{
neg[ncount++]=num;
}
}

printf("\nPositive number list : \n");
for(i=0;i<pcount;i++)
{
printf("%d\t",pos[i]);
}

printf("\nNegative number list : \n");
for(i=0;i<ncount;i++)
{
printf("%d",neg[i]);
}

getch();
return 0;
}