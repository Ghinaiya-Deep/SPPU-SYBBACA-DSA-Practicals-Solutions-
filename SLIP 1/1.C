 //slip 1

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

 //create and insert element in binary tree
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
 {
 node->left=createtree(node->left,data);
 }
 else if(data > node->data)
 {
 node->right=createtree(node->right,data);
 }
 return node;
 }


 //inorder
 void inorder(NODE *node)
 {
 if(node!=NULL)
 {
 inorder(node->left);
 printf("%d\t",node->data);
 inorder(node->right);
 }
 }

 //preorder
 void preorder(NODE *node)
 {
 if(node!=NULL)
 {
 printf("%d\t",node->data);
 preorder(node->left);
 preorder(node->right);
 }
 }

 //postorder
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
 while(ch!=5)
 {
 printf("\n1.Insert Element in Binary Tree");
 printf("\n2.Inorder");
 printf("\n3.Preorder");
 printf("\n4.Postorder");
 printf("\n5.Exit");
 printf("\n\nEnter Your Choice : ");
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
 printf("\nInorder Traversal is : ");
 inorder(root);
 break;

 case 3:
 printf("\nPreorder Traversal is : ");
 preorder(root);
 break;

 case 4:
 printf("\nPostorder Traversal is : ");
 postorder(root);
 break;

 case 5:
 exit(0);

 default :
 printf("\nINVALID CHOICE....");
 break;

 }
}
return 0;
}


