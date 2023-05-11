//program to insert,delete and update an array of n elements dynamically4

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size;
	int index,ele;
	printf("Enter the size of the array\t");
	scanf("%d",&size);
	int array[size];
	printf("Enter the elements:");//read the array
	for(int i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
				}
	printf("The array is:\n");
	for(int i=0;i<size;i++)
	printf("%d\t",array[i]);
	printf("\n");
	int command;
	while(1){//entering the desired command
	printf("\nEnter 1 to updates element to an array\nEnter 2 to delete an element\nEnter 3 to display\nEnter 4 to exit\n");
	scanf("%d",&command);
	switch(command)
	{
		case 1:
	

           //inserting the element to desired index
	   printf("Enter the index position of the new element:\t");
	   scanf("%d",&index);
	   printf("Enter the element: \t");
	   scanf("%d",&ele);
	   size=size+1;
	   for(int i= size-1;i>index;i--)
	   {
		   array[i]=array[i-1];
	   }
	   array[index]=ele;
	   break;
	case 2: //delete the element
	
		
		printf("Enter the  element  you want to delete:\t");
		scanf("%d",&ele);
	        for(int i=0;i<size;i++)
		{
			if(array[i]==ele)
				{       for(int index=i;index<size-1;index++)
				     
					array[index]=array[index+1];
					size=size-1;
				}
		}
		
	   break;
	   
	   case 3: printf("The array is:\n");
	  			for(int i=0;i<size;i++)
				printf("%d\t",array[i]);
				printf("\n");
				break;
		case 4:  exit(0);
	}
	}
		
return 0;
}
