//Write a  C program to convert a given integer (in seconds) to hours, minutes and seconds
#include<stdio.h>
int main()
{
    int num,hour,minute,sec;
    printf("Enter the number: ");
    scanf("%d",&num);
    hour=num/3600;
    num=num%3600;
    minute=num/60;
    sec=num%60;
    printf("H:%dM:%dS:%d\n",hour,minute,sec);
    return 0;
}