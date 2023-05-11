//program to print a certain pattern
#include <stdio.h>
int main()
{
    int i=1,j,row;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=i;j++)
        printf("* ");
    printf("\n");    
    }
    
return 0;    
}
