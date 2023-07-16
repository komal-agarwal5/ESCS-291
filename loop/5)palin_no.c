#include<stdio.h>
void main()
{
	int n,d,copy,rev=0;
	printf("Enter a number\n");
	scanf("%d",&n);
	copy=n;
	while(copy!=0)
	{
		d=copy%10;
		rev=(rev*10)+d;
		copy/=10;
	}
	if(rev==n)
		printf("Number is palindrome\n");
	else
		printf("Number is not palindrome\n");
}
