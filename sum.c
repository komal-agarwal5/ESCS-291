#include<stdio.h>
void main()
{
	int i,N,sum=0;
	printf("Enter the value of N\n");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		sum=sum+i;
	}
	printf("Sum from 1 to %d is: %d\n",N,sum);
}
