#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left,*right;
};
struct node*createnode(int value)
{
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->left=newnode->right=NULL;
	return newnode;
}
struct node*insert(struct node* root,int value)
{
	if (root==NULL)
	return createnode(value);
	if(value<root->data)
	root->left=insert(root->left,value);
	if(value>root->data)
	root->right=insert(root->right,value);
	return root;
}
void inorder(struct node*root)
{
	if(root!=NULL)
	{
	inorder(root->left);
	printf("%d",root->data);
	inorder(root->right);
}
}
int main()
{
	struct node*root=NULL;
	int choice,value; 
	while(1)
	{
		printf("\n1.insert\n2.display(inorder)\n3.exit\n");
		printf("enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("enter value to insert:");
			scanf("%d",&value);
			root=insert(root,value);
			break;
			case 2:printf("BST Inorder Traversal ");
			inorder(root);
			printf("\n");  
			break;
			case 3:
				exit(0);
				default:printf("invalid choice");
		}
	}
	return 0;
}
