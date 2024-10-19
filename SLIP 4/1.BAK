//slip 4 1st

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
temp=(NODE*)malloc(sizeof(NODE));
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

void inorder(NODE *node)
{
if(node!=NULL)
{
inorder(node->left);
printf("%d\t",node->data);
inorder(node->right);
}
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
int ch,n,data,i;
NODE *root=NULL;
clrscr();
while(ch!=4)
{
printf("\n1.Create tree");
printf("\n2.Inorder");
printf("\n3.Postorder");
printf("\n4.Exit");
printf("\n\nEnter your choice : ");
scanf("%d",&ch);

switch(ch)
{
case 1:
printf("\nEnter size of tree : ");
scanf("%d",&n);
printf("\nEnter %d elements : ",n);
for(i=0;i<n;i++)
{
scanf("%d",&data);
root=createtree(root,data);
}
break;

case 2:
printf("\nInorder traversal is :\n ");
inorder(root);
break;

case 3:
printf("\nPostorder traversal is :\n ");
postorder(root);
break;

case 4:
exit(0);

default:
printf("\nINVALID CHOICES....");
break;

}
}
getch();
return 0;
}