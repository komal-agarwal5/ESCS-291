#include<stdio.h>
void main()
{
	int n,i,c=0,m;
	printf("Enter a number\n");
	scanf("%d",&n);
	m=(int)(n/2);
	for(i=2;i<=m;i++)
	{
		if(n%i==0)
		{
		   c++;
		   break;
		}
	}
	if(n==1 || n==0)
	   printf("Number is not prime\n");
	else if(c==0)
	   printf("Number is prime\n");
	else
	   printf("Number is not prime\n");
}
