#include <stdio.h>
#include <stdlib.h>

struct node {
   int data; 
	
   struct node *leftChild;
   struct node *rightChild;
};

struct node *root = NULL;

void insert(int data) {
   struct node *tempNode = (struct node*) malloc(sizeof(struct node));
   struct node *current;
   struct node *parent;

   tempNode->data = data;
   tempNode->leftChild = NULL;
   tempNode->rightChild = NULL;

   //if tree is empty
   if(root == NULL) {
      root = tempNode;//assigned root value to data of tempnode
   } else {
      current = root; //temporary root of the subtrees
      parent = NULL;

      while(1) { 
         parent = current;
         if(data<parent->data){
         //go to left of the tree
            
            current = current->leftChild;                
            
            //insert to the left
           if(current==NULL){
               parent->leftChild = tempNode;
               return;}
            }
			else{
           //go to right of the tree
        
            current = current->rightChild;
			if(current==NULL){
            //insert to the right
          
               parent->rightChild = tempNode;
               return;}
			}
           
         
                
}   
}
}


void inorder_traversal(struct node* root) {
   if(root != NULL) {
      inorder_traversal(root->leftChild);
      printf("%d ",root->data);          
      inorder_traversal(root->rightChild);
   }
}
void preorder_traversal(struct node* root)
{
if(root!=NULL){
printf("%d\t",root->data);
preorder_traversal(root->leftChild);
preorder_traversal(root->rightChild);
}
}
void postorder_traversal(struct node* root)
{
if(root!=NULL){
postorder_traversal(root->leftChild);
postorder_traversal(root->rightChild);
printf("%d\t",root->data);
}
}


int main() {
   int i;
   int array[100],num;
printf("Enter the number of nodes");
scanf("%d",&num);
printf("Enter the nodes");
for(i=0;i<num;i++)
scanf("%d",&array[i]);
   for(i = 0; i < num; i++)
      insert(array[i]);           
int choice;
printf("\nEnter\n 1 to traverse in order \n 2 for preorder traversal \n 3 for postorder traversal\n 4 to exit\n");
while(1){
printf("\nEnter the choice : ");
scanf("%d",&choice);
switch(choice)
	{
 case 1:
   			printf("\nInorder traversal: ");
   			inorder_traversal(root); 
			break;
case 2: printf("\nPreorder traversal: ");
		preorder_traversal(root);     
		break;
case 3: printf("\n Postorder traversal: ");
		postorder_traversal(root);
		break;
case 4: exit(0);
    }
 }
return 0;
}
