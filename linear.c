#include<stdio.h>
int main()
{
	int size,ele,arr[100],check,count=-1;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	printf("\nEnter the elements in the array:\n ");
	for(int i =0;i<size;i++)
	{scanf("%d",&arr[i]);
	if(i==size-1)
		{
			printf("\nThe array is full\n");
			break;
		}
	}	
	printf("\nEnter the element to be searched: ");
	scanf("%d",&ele);
	for(int i=0;i<size;i++)
	{
		if(arr[i]==ele)
{
		check=i;
        printf("\nElement %d found at index =  %d\n",ele,check);
        count++;
		continue;
	}
}
   
	if(count==-1)
	printf("Element %d is not in the array\n",ele);

return 0;

}
