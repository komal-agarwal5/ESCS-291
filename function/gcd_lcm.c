#include<stdio.h>
int gcd(int a,int b);
int lcm(int c,int d);
void main()
{
    int num1,num2,gc,lc;
    printf("Enter two numbers\n");
    scanf("%d%d",&num1,&num2);
    gc=gcd(num1,num2);
    lc=lcm(num1,num2);
    printf("GCD of %d and %d is : %d",num1,num2,gc);
    printf("\nLCM of %d and %d is : %d\n",num1,num2,lc);
}
int lcm(int c, int d) 
{
    static int temp = 1;    
    if(temp%c==0 && temp%d==0)
    {
        return temp;
    }
    else
    {
        temp++;
        lcm(c,d);
        return temp;
    }
}
int gcd(int a,int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}