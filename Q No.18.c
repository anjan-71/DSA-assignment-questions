//program for matrix
#include<stdio.h>
int main()
{
    int i,j,a[10][10],sum=0;
    int rows,col;
    printf("Enter the number of rows and columns: \n");
    scanf("%d%d",&rows,&col);
    printf("Enter the Elements row wise: ");
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=col;j++);
        {scanf("%d",&a[i][j]);}
    }

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=col;j++)
        {if (i==j)
        sum+=a[i][j];
        } 
    }
        printf("The sum of diagonal elements is %d",sum);
        return 0;  
}
