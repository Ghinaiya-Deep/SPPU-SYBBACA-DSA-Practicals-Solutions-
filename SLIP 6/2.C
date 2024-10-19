#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void bubblesort(int a[],int n)
{
int i,j,temp;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
}

int main()
{
int n,i;
int a[20];
clrscr();
printf("\nEnter number of elements : ");
scanf("%d",&n);
printf("\nEnter %d elements : \n",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

bubblesort(a,n);
printf("\nSorted elements in ascending order is : \n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
getch();
return 0;
}