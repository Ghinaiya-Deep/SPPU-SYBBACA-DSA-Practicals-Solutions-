#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
char name[30][30],temp[30];
int i,j,n;
clrscr();
printf("\nEnter Number of strings : ");
scanf("%d",&n);
printf("Input  %d  string  : \n",n);
for(i=0;i<=n;i++)
{
fgets(name[i],sizeof(name),stdin);
}

for(i=1;i<=n;i++)
{
for(j=0;j<=n-i;j++)
{
if(strcmp(name[j],name[j+1]) > 0)
{
strcpy(temp,name[j]);
strcpy(name[j],name[j+1]);
strcpy(name[j+1],temp);
}
}
}

printf("\n\nThe string after sorting is : \n");
for(i=0;i<=n;i++)
{
printf("%s\n",name[i]);
}

getch();
}
