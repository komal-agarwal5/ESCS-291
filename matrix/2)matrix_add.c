#include<stdio.h>
void main()
{
	int i,j,m,n,m2,n2;
	printf("Enter matrix1 size\n");
	scanf("%d %d",&m,&n);
	printf("Enter matrix2 size\n");
	scanf("%d %d",&m2,&n2);
	if((m==m2)&&(n==n2))
	{
		int a1[m][n];
		int a2[m][n];
		int sum[m][n];
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("Enter matrix1 element\n");
				scanf("%d",&a1[i][j]);
			}
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
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
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d ",a2[i][j]);
				sum[i][j]=a1[i][j]+a2[i][j];
			}
			printf("\n");
		}
		printf("\nSum of matrix elements is :\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d ",sum[i][j]);
			}
			printf("\n");
		}
	}
	else 
		printf("Addition not possible\n");
}
