#include<stdio.h>
void fibo(int a);
void main()
{
    int num;
    printf("Enter range\n");
    scanf("%d",&num);
    printf("Fibonacci series upto %d is :\n",num);
    fibo(num);
    printf("\n");
}
void fibo(int a)
{
    int f=0,f1=1,f2=0,i;
    printf("%d %d ",f,f1);
    for(i=2;i<a;i++)
    {
        f2=f+f1;
        printf("%d ",f2);
        f=f1;
        f1=f2;
    }
}
