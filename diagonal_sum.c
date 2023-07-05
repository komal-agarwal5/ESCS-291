#include <stdio.h>
#include <stdlib.h>
void main() 
{
    int x,y,m,sum=0;
    int **a;
    printf("Enter size of the matrix : ");
    scanf("%d", &m);
    a=(int **)malloc(m * sizeof(int *));
    for(x=0;x<m;x++) 
    {
        a[x] = (int *)malloc(m * sizeof(int));
    }
    for(x=0;x<m;x++)
    {
        for(y=0;y<m;y++) 
        {
            printf("Enter element : ");
            scanf("%d", &a[x][y]);
        }
    }
    for(x=0;x<m;x++)
    {
        for(y=0;y<m;y++)
        {
            if(x==y)
                sum+=a[x][y];
            if((x+y)==(m-1))
                sum+=a[x][y];
        }
    }
    printf("Matrix is :\n");
    for(x=0;x<m;x++)
    {
        for(y=0;y<m;y++) 
            printf("%d ",a[x][y]);
        printf("\n");
    }
    printf("The sum of both diagonal elements is %d\n", sum);
}
