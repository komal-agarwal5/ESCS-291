#include <stdio.h>

double sum_of_series(int n) {
    double sum = 0;
    double fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
        sum += 1 / fact;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the value of n: \n");
    scanf("%d", &n);
    printf("Sum of the series is %lf\n", sum_of_series(n));
    return 0;
}
