//slip 1 2

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int eval(int [],int,int);
void main()
{
int a[10],n,x,i,e;
clrscr();

printf("\nEnter degree of polynomial : ");
scanf("%d",&n);
printf("\nEnter coefficient of polynomial  : ");
for(i=n;i>=0;i--)
{
scanf("%d",&a[i]);
}

printf("\nEnter polynomial is : ");
for(i=n;i>0;i--)
{
if(a[i]!=0)
{
printf("%dx^%d+",a[i],i);
}
}
printf("%d",a[i]);
printf("\nEnter value of X : ");
scanf("%d",&x);
e=eval(a,n,x);
printf("\nEvaluation of polynomial is %d ",e);
getch();
}

int eval(int a[],int n,int x)
{
int sum=0,i;
for(i=n;i>0;i--)
{
sum=sum+a[i]*pow(x,i);
}
return sum;
}










































































































































