#include<stdio.h>
void main()
{
	int i,j,m,n,m2,n2,k,size,sum;
	printf("Enter matrix1 size\n");
	scanf("%d %d",&m,&n);
	printf("Enter matrix2 size\n");
	scanf("%d %d",&m2,&n2);
	size=n2;
	if(n==m2)
	{
		int a1[m][n];
		int a2[m2][n2];
		int prod[m][n2];
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("Enter matrix1 element\n");
				scanf("%d",&a1[i][j]);
			}
		}
		for(i=0;i<m2;i++)
		{
			for(j=0;j<n2;j++)
			{
				printf("Enter matrix2 element\n");
				scanf("%d",&a2[i][j]);
			}
		}
		printf("Matrix 1 is :\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d ",a1[i][j]);
			}
			printf("\n");
		}
		printf("Matrix 2 is :\n");
		for(i=0;i<m2;i++)
		{
			for(j=0;j<n2;j++)
			{
				printf("%d ",a2[i][j]);
			}
			printf("\n");
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n2;j++)
			{
				sum=0;
				for(k=0;k<size;k++)
					sum+=a1[i][k]*a2[k][j];
				prod[i][j]=sum;
			}
		}
		printf("\nProduct of matrix elements is :\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n2;j++)
			{
				printf("%d ",prod[i][j]);
			}
			printf("\n");
		}
	}
	else
		printf("Multiplication not possible\n");
}
