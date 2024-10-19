#include<stdio.h>
#include<stdlib.h>
void main()

{
int a[10],b[10],c[10],i,m,n,cnt=0;
clrscr();
for(i=0;i<=9;i++)
{
a[i]=0;
}

for(i=0;i<=9;i++)
{
b[i]=0;
}

printf("\nEnter order of first polynomial : ");
scanf("%d",&m);
printf("\nEnter coefficient : ");
for(i=m;i>=0;i--)
{
scanf("%d",&a[i]);
}

printf("\nEnter order of second polynomial : ");
scanf("%d",&n);
printf("\nEnter coefficient : ");
for(i=n;i>=0;i--)
{
scanf("%d",&b[i]);
}

if(m>=n)
{
for(i=m;i>=0;i--)
{
c[i]=a[i]+b[i];
cnt++;
}
}

else
{
for(i=n;i>=0;i--)
{
c[i]=a[i]+b[i];
}
}

printf("\nAddition of polynomial is : ");
for(i=cnt-1;i>0;i--)
{
printf("%dx^%d+",c[i],i);
}
printf("%d",c[i]);
getch();
}