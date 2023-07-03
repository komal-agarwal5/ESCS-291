#include<stdio.h>
void main()
{
	int i,n,max,min;
	printf("Enter array size\n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter array element\n");
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	printf("Array is:\n");
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
		printf("%d ",a[i]);
	}
	printf("\nMaximum element is : %d\n",max);
	printf("Minimum element is : %d\n",min);
}
