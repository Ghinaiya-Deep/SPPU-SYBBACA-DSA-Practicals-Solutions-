#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int binarysearch(int a[],int l,int r,int x)
{
int m;
while(l<=r)
{
m=l+(r-1)/2;
if(a[m]==x)
return m;

if(a[m]<x)
l=m+1;
else
r=m-1;
}
return -1;
}

int main(void)
{
int a[]={2,3,4,10,40};
int n=sizeof(a)/sizeof(a[0]);
int x=10;
int result=binarysearch(a,0,n-1,x);
clrscr();

(result==1)?
printf("\n%d Element is not present in array",x):
printf("\n%d Element is present at %d index",x,result);
getch();
return 0;
}
