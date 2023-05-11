//Write a C program that accepts three integers from the user and find second largest number among these.
#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter the numbers: ");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2)
    {
        if(num2>num3)
        printf("%d is second largest\n",num2);
        else
        {
            if(num3>num1)
            printf("%d is second largest\n",num1);
            else
            printf("%d is second largest number\n",num3);
        }
    }
    else
    {
        if(num1>num3)
        printf("%d is second largest number\n",num1);
        else
        {
            if(num3>num2)
            printf("%d is second largest\n",num2);
            else
            printf("%d is second largest\n",num3);
        }
    }
    /*if(num1>num3)
    {
        if(num3>num2)
        printf("%d is second largest\n",num3);
                else
        {
            if(num1>num2)
            printf("%d is second largest\n",num2);
            else
            printf("%d is second largest number\n",num1);
        }
    }
    if(num2>num3)
    {
        if(num3>num1)
        printf("%d is second largest\n",num3);
        else
        {
            if(num2>num1)
            printf("%d is second largest\n",num1);
            else
            printf("%d is second largest\n",num2);
        }
    }*/
    return 0;
}