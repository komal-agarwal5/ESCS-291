#include<stdio.h>
#include<math.h>
void main()
{
	int n,d,copy,c=0,sum=0,copy2;
	printf("Enter a number\n");
	scanf("%d",&n);
	copy=n;
	while(copy!=0)
	{
		c++;
		copy/=10;
	}
	copy2=n;
	while(copy2!=0)
	{
		d=copy2%10;
		sum=sum+(int)(pow(d,c));
		copy2/=10;
	}
	if(sum==n)
	   printf("Number is Armstrong\n");
	else
	   printf("Number is not Armstrong\n");
}
