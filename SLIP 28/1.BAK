#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct BST
{
int data;
struct BST *left;
struct BST *right;
};

typedef struct BST NODE;
NODE *node;
NODE *createtree(NODE *node,int data)
{
if(node==NULL)
{
NODE *temp;
temp=(NODE *)malloc(sizeof(NODE));
temp->data=data;
temp->left=temp->right=NULL;
return temp;
}

if(data < node->data)
node->left=createtree(node->left,data);

else if(data > node->data)
node->right=createtree(node->right,data);

return node;
}

NODE *search(NODE *node,int data)
{
if(node==NULL)
printf("\nElement not found...");

else if(data < node->data)
node->left=search(node->left,data);

else if(data > node->data)
node->right=search(node->right,data);

else
printf("\n%d element is found",node->data);
return node;
}

void postorder(NODE *node)
{
if(node!=NULL)
{
postorder(node->left);
postorder(node->right);
printf("%d\t",node->data);
}
}

int main()
{
int data,ch,n,i;
NODE *root=NULL;
clrscr();
while(ch!=4)
{
printf("\n1.Insert element in tree");
printf("\n2.Search element in tree");
printf("\n3.Postorder");
printf("\n4.Exit");
printf("\n\nEnter Your Choice : ");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("\nEnter size of tree : ");
scanf("%d",&n);
printf("\nEnetr %d elements : ",n);
for(i=0;i<n;i++)
{
scanf("%d",&data);
root=createtree(root,data);
}
break;

case 2:
printf("\nEnter element to be search : ");
scanf("%d",&data);
root=search(root,data);
break;

case 3:
printf("\nPostorder Traversal is : \n");
postorder(root);
break;

case 4:
exit(0);

default:
printf("\nINVALID CHOICES....");
break;
}
}
}
