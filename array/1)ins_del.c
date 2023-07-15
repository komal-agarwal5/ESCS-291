#include<stdio.h>
void main()
{
    int n,i,ins,pos1,pos2;
    printf("Enter array size\n");
    scanf("%d",&n);
    int a[n+1];
    for(i=0;i<n;i++)
    {
        printf("Enter array elements : ");
        scanf("%d",&a[i]);
    }
    printf("Array elements are:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\nEnter element to be inserted along with position\n");
    scanf("%d %d",&ins,&pos1);
    for(i=n;i>=pos1;i--)
        a[i]=a[i-1];
    a[pos1-1]=ins;
    printf("Array elements after insertion are:\n");
    for(i=0;i<=n;i++)
        printf("%d ",a[i]);
    printf("\nEnter position to be deleted after insertion is done\n");
    scanf("%d",&pos2);
    for(i=pos2-1;i<n;i++)
        a[i]=a[i+1];
    printf("\nArray elements after insertion and deletion are:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
}
