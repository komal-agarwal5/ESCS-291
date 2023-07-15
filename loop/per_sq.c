#include<stdio.h>
void main()
{
	int n,i,sq,c=0;
	printf("Enter a number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sq=i*i;
		if(sq==n)
		{
		   c=1;
		   break;
		}
	}
	if(c==1)
	   printf("Number is perfect square\n");
	else
	   printf("Number is not perfect square\n");
}
