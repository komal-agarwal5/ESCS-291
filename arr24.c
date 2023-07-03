#include<stdio.h>
void main()
{
	int i,j,m,n,flag=1;
	printf("Enter matrix size\n");
	scanf("%d %d",&m,&n);
	int a1[m][n];
	int a2[m][n];
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
			if(a1[i][j]!=a2[i][j])
				flag=0;
		}
		printf("\n");
	}
	if(flag==1)
		printf("\nMatrices are identical\n");
	else
		printf("\nMatrices are not identical\n");
	
}
