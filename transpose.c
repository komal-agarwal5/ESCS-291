#include<stdio.h>
void main()
{
	int i,j,m,n;
	printf("Enter matrix size\n");
	scanf("%d%d",&m,&n);
	int a[m][n];
	int t[n][m];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter matrix element\n");
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix before transpose is :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			t[i][j]=a[j][i];
		}
	}
	printf("\nMatrix after transpose is :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			printf("%d ",t[i][j]);
		printf("\n");
	}

}
