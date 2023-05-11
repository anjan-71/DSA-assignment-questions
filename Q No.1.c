//program to print right side triangle
#include <stdio.h>
int main()
{
    int i,j,rows,k;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=rows;j>=i;j--)
        {
            printf(" ");
        }
        for (k=1;k<=i;k++)
        {
            printf("%d",i);
        }
        printf("\n");     
    }
    return 0;
}