//program to swap numbers
#include<stdio.h>
int main()
{
    /*int num1,num2;
    printf("Enter the two numbers: ");
    scanf("%d%d",&num1,&num2);
    printf("Before swapping num1=%d, num2=%d\n",num1,num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("After swapping num1=%d, num2=%d\n",num1,num2);*/
    int num1,num2,temp;
    printf("Enter the two numbers : ");
    scanf("%d%d",&num1,&num2);
    printf("Before swapping num1 = %d \n num2=%d \n",num1,num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("After swapping num1=%d, num2=%d\n",num1,num2);
    return 0;
}

