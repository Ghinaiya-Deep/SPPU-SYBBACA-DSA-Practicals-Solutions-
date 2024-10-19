#include<stdio.h>
#include<conio.h>

void insertionsort(int a[],int n)
{
int i,j,key;
for(i=1;i<n;i++)
{
key=a[i];
j=i-1;

while(j>=0 && a[j] > key)
{
a[j+1]=a[j];
j=j-1;
}
a[j+1]=key;
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

insertionsort(a,n);
printf("\nSorted element in ascending order : \n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
getch();
return 0;
}








