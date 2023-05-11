//print largest number in a list
#include <stdio.h>
int main()
{
int arr[4]={1,2,5,8};

int max=arr[0];
for (int i=0;i<4;i++)
{
    if (arr[i]>max)
    max=arr[i];
}
printf("The largest element present is %d",max);
}