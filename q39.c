#include <stdio.h>

int main() {
    int n;
    int fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    

    int N;
    float sum = 0.0;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; ++i) {
        sum += (float)i / factorial(i);
    }

    printf("Sum  1/1! + 2/2! + 3/3! + ... + %d/%d! is: %f\n", N, N, sum);

    return 0;
}