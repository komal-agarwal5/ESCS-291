#include <stdio.h>
#include <stdlib.h>
void main()
{
    int x,y,n,p=0;
    printf("Enter array size : ");
    scanf("%d",&n);
    int *a = (int*)malloc(n * sizeof(int));
    for(x=0;x<n;x++)
    {
        printf("Enter array element : ");
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
            a[p++]=a[x];
    }
    if(a[n-1]!=-1)
        a[p++]=a[n-1];
    printf("Array without duplicates is:\n");
    for(x=0;x<p;x++)
        printf("%d ",a[x]);
    printf("\n");
}