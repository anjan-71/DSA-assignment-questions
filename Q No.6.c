//program to check if number is perfect
#include <stdio.h>
void checkperfect(int num)
{   int sum=1;
   for(int i=2;i*i<=num;i++)
   {
    if(num%i==0)
    {
        if(i*i!=num)
        sum=sum+i+num/i;
        else
        sum=sum+i;
    }
   }
   if(num==sum)
   printf("Perfect number");
   else
   printf("Imperfect number");
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    checkperfect(num);
    return 0;
}