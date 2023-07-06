#include<stdio.h>
// Function Prototype
void swapv(int x, int y);
void swapr(int*, int*);
// Main function
int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    // Pass by Values
    printf("For call by value, values before swapping are:\n");
    printf("%d %d\n", a,b);
    printf("For call by value, values after swapping are:\n");
    swapv(a, b);
     // Pass reference
    printf("For call by refernce, values before swapping are:\n");
    printf("%d %d\n",a,b);
    printf("For call by refernce, values after swapping are:\n");
    swapr(&a,&b);
    return 0;
}
// Swap functions that swaps two values
void swapv(int x, int y)
{
    int t;
    t = x;
    x = y;
    y = t;
    printf("%d %d\n",x,y);
}
// Function to swap two variables by references
void swapr(int* x, int* y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
    printf("%d %d\n", *x, *y);
}
