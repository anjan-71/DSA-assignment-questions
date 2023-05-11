//program to check if a number is armstrong
#include <stdio.h>
#include <math.h>
int main()
{
    int num,check,rem,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    check=num;
    for(;num!=0;num=num/10)
    {
        rem=num%10;
        sum+=rem*rem*rem;
    }
    if(sum==check)
         printf("The number is armstrong\n");
    else
    printf("The number is not armstrong");
return 0;
}