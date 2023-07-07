#include<stdio.h>
void main()
{
	int i,j,k,n,l;
	printf("Enter range\n");
	scanf("%d",&n);
	l=(n*2)-1;
	for(i=1;i<=l;i+=2)
	{
		for(j=l;j>i;j-=2)
			printf(" ");
		for(k=1;k<=i;k++)
			printf("*");
		printf("\n");
	}
}
