#include<stdio.h>
#include<stdlib.h>
int acker(int a,int b)
{
   if(a>=0 && b>=0)
   {
    if(a==0)
    {
        return b+1;
    }
    else if(a>0&&b==0)
    {
        return acker(a-1,1);
    }
    else if(a>0&&b>0)
    {
        return acker(a-1,acker(a,b-1));
    }
   }
}
void main()
{
    int x,y;
    printf("Enter two numbers:\n");
    scanf("%d%d",&x,&y);
    int s = acker(x,y);
    printf("The result is : %d\n",s);
}
