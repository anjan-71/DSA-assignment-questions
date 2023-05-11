// fifo array
#include<stdio.h>
int main()
{
int size,count,ele,arr[100];
printf("enter the size of the element: ");
scanf("%d",&size);
int n=1;
count=-1;
while(1)
{
int choice;
printf("Enter 1 to insert\n Enter 2 to delete\nEnter 3 to exit\n");
scanf("%d",&choice);
switch(choice)
{
	case 1:	     if(count==size-1)
      			{printf("\nOverflow\n\n");
      			break;}
  				else
  				 {   printf("Enter the element: ");
 				 scanf("%d",&ele);
    			  count++;
 					arr[count]=ele;
 					 }
				
				break;
case 2:			if(count==-1)
				printf("Underflow\n");
				else{
				for(int i=-1;i<=size;i++)
				arr[i]=arr[i+1];
				count=count-1;
				break;
case 3: printf("\t\tThe updated  array is:\n");
				for(int i=0;i<=count;i++)
				printf("%d\t",arr[i]);
				printf("\n");
				break;
case 4: exit(0);
}
}
return 0;

}
