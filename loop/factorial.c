#include<stdio.h>
void main()
{
	int n,i,f=1;
	printf("Enter a number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	if(n<0)
		printf("Factorial does not exist for negative number\n");
	else
		printf("Factorial is %d\n",f);
}
