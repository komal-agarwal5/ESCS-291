#include<stdio.h>
int fact(int n);
void main()
{
    int num,fa;
    printf("Enter a number\n");
    scanf("%d",&num);
    fa=fact(num);
    printf("Factorial of %d is : %d\n",num,fa);   
}
int fact(int n)
{
    if(n==1)
        return 1;
    else 
        return n*fact(n-1);
}