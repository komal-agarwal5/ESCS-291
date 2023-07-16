#include<stdio.h>
void main()
{
	int n,d,sum=0,copy;
	printf("Enter a number\n");
	scanf("%d",&n);
	copy=n;
	while(copy!=0)
	{
		d=copy%10;
		sum=sum+d;
		copy/=10;
	}
	printf("Sum of digits is : %d\n",sum);
}
