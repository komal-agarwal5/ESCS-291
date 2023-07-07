#include<stdio.h>
void main()
{
	int x,y,n,temp;
	printf("Enter array size : ");
	scanf("%d",&n);
	int a[n];
	for(x=0;x<n;x++)
	{
		printf("Enter array element : ");
		scanf("%d",&a[x]);
	}
	printf("Original array is :\n");
	for(x=0;x<n;x++)
		printf("%d ",a[x]);
	for(x=0;x<n;x++)
	{
		for(y=0;y<n-x-1;y++)
		{
			if(a[y]>a[y+1])
			{
				temp=a[y];
				a[y]=a[y+1];
				a[y+1]=temp;
			}
		}
	}
	printf("\nSorted array is :\n");
	for(x=0;x<n;x++)
		printf("%d ",a[x]);
	printf("\n");
}

