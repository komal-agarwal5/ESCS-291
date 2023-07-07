#include<stdio.h>
void main()
{
    int r,cf=1,sp,i,j;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    for(i=0;i<r;i++) 
    {
       for (sp=1;sp<=r-i;sp++)
          printf("  ");
       for (j=0;j<=i;j++)
       {
          if (j==0 || i==0)
            cf = 1;
          else
            cf = cf*(i-j+1)/j;
         printf("%4d", cf);
       }
      printf("\n");
   }
}
