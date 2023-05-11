//program tpo add sum of first and last number
#include<stdio.h>
int main()
{
    int array[10],i,size,low;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    printf("Enter the elements of the array: \n");
    for(i=0;i<size;i++)
    scanf("%d",&array[i]);
    printf("The array: \n");
    for(i=0;i<size;i++)
    printf("%d\t",array[i]);
    low=array[0];
    for(i=0;i<size;i++){
        if(array[i]<low)
        low=array[i];
    }
    printf("\nThe smallest element is %d\n",low);
    return 0;
}
  











