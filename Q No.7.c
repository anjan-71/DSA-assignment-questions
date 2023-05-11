//program to check if number is automorphic
#include<stdio.h>
void checkauto(int num)
{
    int square,lastnum;
    square=num*num;
    lastnum=square%10;
    if(num==lastnum)
    printf("The number is automorphic");
    else
    printf("The number is not automorphic");
}
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    checkauto(num);
    return 0;
}