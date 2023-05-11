#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
struct node *left;
struct node *right;
};
struct node *create(int val)
{
 struct node * newnode= malloc(sizeof(struct node));
newnode->data=val;
newnode->left=NULL;
newnode->right=NULL;
return newnode;
}
struct node* insertleft(struct node* root,int val)
{
root->left=create(val);
return root->left;
}
struct node *insertright(struct node* root,int val)
{
root->right=create(val);
return root->right;
}
void inorder(struct node* root)
{
if(root==NULL)
return;
while(root!=NULL)
{
inorder(root->left);
printf("nodes=%d",root->data);
printf("\n");
inorder(root->right);
}
}
int main()
{
int num,left,right;
printf("Enter the root value");
scanf("%d",&num);
struct node *root=create(num);
int choice;
printf(" 1 to enter root node \n 2 to enter left node \n 3 to enter right node \n 4 to traverse in order \n 5 to exit\n");
//printf("Enter the choice: ");
//scanf("%d",&choice);
while(1)
{
printf("Enter the choice: ");
 scanf("%d",&choice);

switch(choice)
{
// case 1: struct node *root=create(num);
		//break;
case 2: printf("Enter the value");
		scanf("%d",&left);
		insertleft(root,left);
		break;
case 3: printf("Enter the value");
	    scanf("%d",&right);
		insertright(root,right);
		break;
case 4: inorder(root);
		break;
case 5: exit(0);
}
}
return 0;
}

