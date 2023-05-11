//largest of 3 numbers
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the third number: ");
    scanf("%d",&c);
    {
        if (a>b && a>c)
        printf("The largest number is: %d",a);
        if (b>a && b>c)
        printf("The largest number is: %d",b);
        if (c>a && c>b)
        printf("The largest number is: %d",c);
        
    }
}
