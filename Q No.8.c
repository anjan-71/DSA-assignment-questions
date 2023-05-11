//program to calculator
#include <stdio.h>
#include <math.h>
int main()
{
    int num1,num2,num,a,b;
    char operator;
    printf("Enter the operator: ");
    scanf("%s",&operator);
    printf("Enter the first and second numbers: ");
    scanf("%d%d",&num1,&num2);
    
    a=num1;
    b=num2;
    switch(operator)
    {
        case '+': num=a+b;
                  printf("The result is: %d",num);
                  break;
        case '-': if(a>=b){
                  num=a-b;
                  printf("The result is: %d",num);}
                  else{
                  num=b-a;
                  printf("The result is: %d",num);}
                  break;
        case '/': num=a/b;
                  printf("The result is: %d",num);
                  break;
        case '*': num=a*b;
                  printf("The result is : %d",num);   
    }
    return 0;
}