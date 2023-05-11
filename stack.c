//stack using pop push peek
#include<stdio.h>
#include<stdlib.h>
int top=-1,stack[20],size;
void push();
void pop();
void peek();

int main()
{

printf("Enter the size of the stack: ");
scanf("%d",&size);
while(1)
{
 int choice;                                                                                                     
   printf("\nEnter\n 1 to push \n 2 to pop\n 3 to peek\n 4 to exit\n");
   scanf("%d",&choice);

 switch(choice)
{
	case 1:push();
			break;
	case 2:pop();
			break;
	case 3: peek();
			break;
	case 4: exit(0);

}
}
return 0;

}
void push()
{
if(top==size-1)
       {printf("Overflow\n");                                                                                      
       }
   else
    {int ele;   
	printf("Enter the element: ");
   scanf("%d",&ele);
       top++;
   stack[top]=ele;
   }
}
void pop()
{
if(top==-1)
          printf("\nUnderflow\n");
          else{
  
 printf("%d is deleted\n",stack[top]);
top=top-1;
}
}
void peek()
{
if(top==-1)
printf("no element to display");
else
{
for(int i=0;i<=top;i++)
printf("%d",stack[i]);}
}
