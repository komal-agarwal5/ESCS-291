#include<stdio.h>
void main()
{
	int x,y,n,temp,min;
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
	for(x=0;x<n-1;x++)
	{
		min=x;
		for(y=x+1;y<n;y++)
		{
			if(a[y]<a[min])
				min=y;
		}
		temp=a[x];
		a[x]=a[min];
		a[min]=temp;
	}
	printf("\nSorted array is :\n");
	for(x=0;x<n;x++)
		printf("%d ",a[x]);
	printf("\n");
}			
