//program to check a palindrome
#include <stdio.h>
int main()
{
    int num,rev=0,check,rem;
    printf("Enter the number: ");
    scanf("%d",&num);
    check=num;
    for(;num!=0;num=num/10)
    {
        rem=num%10;
        rev=rev*10+rem;
    }
    if (check==rev)
    printf("The number is palindrome\n");
    else
    printf("The number is not palindrome\n");
    return 0;
}