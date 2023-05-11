//program to insert,delete and update an array of n elements dynamically
#include<stdio.h>
int main()
{
	int size,ele;
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
	int command;//entering the desired command
	printf("Enter 1 to insert element to an array\nEnter 2 to delete an element\n");
	scanf("%d",&command);
	if(command==1)
	{
           int index,ele;//inserting the element to desired index
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
	   printf("The updated array is:\n");//updated
	   for(int i=0;i<size;i++)
		   printf("%d\t",array[i]);
	   printf("\n");    
	}
	if(command==2)//delete the element
	{
		int ele;
		printf("Enter  the element  you want to delete:\t");
		scanf("%d",&ele);
	        for(int i=0;i<size;i++)
		{
			if(array[i]==ele)
				{       for(int index=i;index<size-1;index++)
				     
					array[index]=array[index+1];
				
				}
		}
	
		printf("the updated array is\n");
		for(int i=0;i<size-1;i++)
		printf("%d\t",array[i]);
	        printf("\n");
}
return 0;
}
