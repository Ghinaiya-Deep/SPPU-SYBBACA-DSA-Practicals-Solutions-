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

NODE *findmin(NODE *node)
{
if(node==NULL)
return NULL;

if(node->left)
return findmin(node->left);

else
return node;
}

NODE *del(NODE *node,int data)
{
NODE *temp;
if(node==NULL)
{
printf("\nElements not found....");
}
else if(data < node->data)
node->left=del(node->left,data);

else if(data > node->data)
node->right=del(node->right,data);

else
{
if(node->right && node->left)
{
temp=findmin(node->right);
node->data=temp->data;
node->right=del(node->right,temp->data);
}
else
{
temp=node;
if(node->left==NULL)
node=node->right;
else if(node->right==NULL)
node=node->left;
free(temp);
}
}
return node;
}

int main()
{
int ch,n,i,data;
NODE *root=NULL;
clrscr();
while(1)
{
printf("\n1.Insert element in tree");
printf("\n2.Inorder");
printf("\n3.Preorder");
printf("\n4.Postorder");
printf("\n5.Delete element from tree");
printf("\n6.Exit");
printf("\n\nEnter your choice  : ");
scanf("%d",&ch);

switch(ch)
{
case 1: printf("\nEnter size of tree : ");
	scanf("%d",&n);
	printf("\nEnter %d elements : \n",n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&data);
	root=createtree(root,data);
	}
	break;

case 2: printf("\nInorder Traversal is : \n");
	inorder(root);
	break;

case 3: printf("\nPreorder Traversal is : \n");
	preorder(root);
	break;

case 4: printf("\nPostorder Traversal is  : \n");
	postorder(root);
	break;

case 5: printf("\nEnter element to delete : ");
	scanf("%d",&data);
	root=del(root,data);
	break;

case 6: exit(0);

default : printf("\nINVALID CHOICES...");
	break;

}
}
}