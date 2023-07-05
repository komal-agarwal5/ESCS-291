#include<stdio.h>
void main()
{
	int n,i,f=0,f1=1,f2=0;
	printf("Enter a range\n");
	scanf("%d",&n);
	printf("Fibonacci series for first %d terms is :\n",n);
	printf("%d %d ",f,f1);
	for(i=2;i<n;i++)
	{
		f2=f+f1;
		printf("%d ",f2);
		f=f1;
		f1=f2;
	}
	printf("\n");
}
