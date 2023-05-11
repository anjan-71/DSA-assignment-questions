// Write a program in C to find the sum of all elements of the array.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *array,sum=0,size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    array=(int *)malloc(size* sizeof(int));
    printf("Enter the elements: ");
    for(int i=0;i<size;i++)
    scanf("%d",&array[i]);
    for(int i=0;i<size;i++)
    sum+=array[i];
    printf("The sum of the elements are: %d\n",sum);
    return 0;
}