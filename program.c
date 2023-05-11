// WAP to convert octal to decimal
#include<stdio.h>
#include<math.h>
int main()
{
	int number,dec=0,rem1,hex,count=0;
	printf("Enter the octal  number: ");
	scanf("%d",&number);
	for (count=0;number!=0;number=number/10)
	{
	     rem1=number%10;
             dec=dec+rem1*pow(8,count);
	     count++;
	}
	printf("The decimal equivalent is %d\n",dec);

//wap to convert decimal to hexadecimal
        int rem,quo=1;
	while( dec!=0)
	{
        rem=dec%16;
	printf("%d",rem);
	dec=dec/10;
	}
	printf("\n");

        
	return 0;
}
