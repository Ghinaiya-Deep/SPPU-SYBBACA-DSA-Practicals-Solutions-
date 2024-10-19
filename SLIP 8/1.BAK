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

else if(data < node->data)
node->left=createtree(node->left,data);

else if(data > node->data)
node->right=createtree(node->right,data);

return node;
}

NODE *search(NODE *node,int data)
{
if(node==NULL)
{
printf("\nElement not found...");
}

else if(data < node->data)
node->left=search(node->left,data);

else if(data > node->data)
node->right=search(node->right,data);

else
printf("\n%d element found",node->data);

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

void preorder(NODE *node)
{
if(node!=NULL)
{
printf("%d\t",node->data);
preorder(node->left);
preorder(node->right);
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
int ch,n,i,data;
NODE *root= NULL;
clrscr();
while(1)
{
printf("\n1.Insert element");
printf("\n2.Search element");
printf("\n3.Inorder");
printf("\n4.Preorder");
printf("\n5.Postorder");
printf("\n6.Exit");
printf("\n\nEnter your choice : ");
scanf("%d",&ch);

switch(ch)
{
case 1:printf("\nEnter size of tree : ");
	scanf("%d",&n);
	printf("\nEnter %d element : \n",n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&data);
	root=createtree(root,data);
	}
	break;

case 2:printf("\nEnter element to be search : ");
	scanf("%d",&data);
	root=search(root,data);
	break;

case 3: printf("\nInorder Traversal is : \n");
	inorder(root);
	break;

case 4:printf("\nPreorder Traversal is  : \n");
	preorder(root);
	break;

case 5:printf("\nPostorder Traversal is : \n");
	postorder(root);
	break;

case 6:exit(0);

default : printf("\nINVALID CHOICES....");
	break;
}
}
}