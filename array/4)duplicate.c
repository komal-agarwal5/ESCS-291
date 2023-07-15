#include<stdio.h>
void main()
{
    int n,x,y,p=0;
    printf("Enter array size\n");
    scanf("%d",&n);
    int a[n],b[n];
    for(x=0;x<n;x++)
    {
        printf("Enter array elements: ");
        scanf("%d",&a[x]);
    }
    for(x=0;x<n-1;x++)
    {
        for(y=x+1;y<n;y++)
        {
            if(a[x]==a[y])
            {
                a[y]=-1;
            }
        }
        if(a[x]!=-1)
            b[p++]=a[x];
    }
    if(a[n-1]!=-1)
        b[p++]=a[n-1];
    printf("Array without duplicates is : \n");
    for(x=0;x<p;x++)
    {
        printf("%d ",b[x]);
    }  
    printf("\n");
}
