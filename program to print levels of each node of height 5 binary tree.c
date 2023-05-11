//program to print levels of each node of height 5 binary tree
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
//defined global variables
struct node*root=NULL;
int currentLevel=0;
//inserting node values
void insert(int data) {
   struct node *tempNode = (struct node*)malloc(sizeof(struct node));
   struct node *current;
   struct node *parent;

   tempNode->data = data;
   tempNode->left = NULL;
   tempNode->right = NULL;

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
            
            current = current->left;                
            
            //insert to the left
           if(current==NULL){
               parent->left = tempNode;
              
               return;}
            }
			else{
           //go to right of the tree
        
            current = current->right;
			if(current==NULL){
            //insert to the right
          
               parent->right = tempNode;
               
               return;}
			}
           
         
                
}   
}
}
//function that checks the maxheight for the tree so that nodes doesnt exceeds
int maxheight(struct node*node)
{
    if(node==NULL)
    return 0;
    else
    {
        int LeftHeight=maxheight(node->left);
        int RightHeight=maxheight(node->right);
        if(LeftHeight>RightHeight)
            return (LeftHeight+1);
        else
            return(RightHeight+1);

    }
}
//function to print the level of node
void printLevelOfNode(struct node* root, int currentLevel, int num) {
   
    if(root == NULL) {
        return;   
    }
  
 if(root->data == num) {
        printf("Level of %d is %d \n", num, currentLevel);
 }
              
    printLevelOfNode(root->left, currentLevel+1, num);
    printLevelOfNode(root->right, currentLevel+1, num);
}
int main()
{   int num,array[100];
    int i=0; 
   int count=0;
printf("Enter the nodes \n");
//takes user input and creates BST
while(1)
{   scanf("%d",&array[i]);
    
    insert(array[i]);
    i++;
    count=maxheight(root);
    if(count==5)
    break; 
}   
for(int c=0;c<i;c++)//loop to print levels of every node
printLevelOfNode(root,currentLevel,array[c]);
getchar();
return 0;
}