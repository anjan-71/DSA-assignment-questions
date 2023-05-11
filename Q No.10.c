//program to check an even or odd
#include <stdio.h>
int main()
{
    int a,rem;
    printf("Enter the number: ");
    scanf("%d",&a);
    rem=a%2;
    if(rem==0)
    printf("The number is even");
    else
    printf("The number is odd");
}