//program to find palindrome numbers in a given range
#include <stdio.h>
#include<math.h>
int main()
{
    int num,check,temp,start;
    printf("Enter the starting number: ");
    scanf("%d",&start);
    printf("Enter the N number: ");
    scanf("%d",&num);
    for(int i=start;i<=num;i++) //loop for numbers in the range
        {
            check=i;//store the number
            int sum=0;
            for(temp=i;temp!=0;temp=temp/10)//reverse the number
            {
                int rem=temp%10;
                sum=sum*10+rem;
            }
            if(sum==check)//check if the number is equal to its reverse
            {
                printf("%d\n",check);
            }
        }
return 0;}

