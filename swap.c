#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter two numbers \n");
	scanf("%d%d",&a,&b);
	printf("Value of a before swapping is : %d\n",a);
	printf("Value of b before swapping is : %d\n",b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nValue of a after swapping is : %d\n",a);
	printf("Value of b after swapping is : %d\n",b);
}
