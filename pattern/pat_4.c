#include<stdio.h>
void main()
{
	int i,j,k,l,n,c=0;
	printf("Enter range\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>i;j--)
			printf(" ");
		c=i;		
		for(k=1;k<=i;k++)
		{
			printf("%d",c);			
			c++;
		}
		c-=2;
		for(l=2;l<=i;l++)
		{
			printf("%d",c);			
			c--;
		}
		printf("\n");
	}
}
