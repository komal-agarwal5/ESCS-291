#include<stdio.h>
void main()
{
    int n,x,y,c;
    printf("Enter array size\n");
    scanf("%d",&n);
    int a[n];
    for(x=0;x<n;x++)
    {
        printf("Enter array elements: ");
        scanf("%d",&a[x]);
    }
    for(x=0;x<n-1;x++)
    {
        c=1;
        for(y=x+1;y<n;y++)
        {
            if(a[x]==a[y])
            {
                a[y]=-1;
                c++;
            }
        }
        if(a[x]!=-1)
        printf("Frequency of %d is: %d\n",a[x],c);
    }
    if(a[n-1]!=-1)
        printf("Frequency of %d is: %d\n",a[n-1],c);
}