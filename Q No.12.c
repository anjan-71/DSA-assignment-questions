//program to check if a number is harshad
#include<stdio.h>
int main()
{
    int num,temp,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    temp=num;
    do
    {
        sum+=(temp%10);
        temp=temp/10;
    }while(temp!=0);
    if(num%sum==0)
    printf("Harshad number");
    else
    printf("Not harshad number");
    return 0;
}