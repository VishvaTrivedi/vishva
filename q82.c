#include <stdio.h>

// Function to calculate the factorial of a number
unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate nCr (binomial coefficient)
unsigned long long nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;

    // Input values for n and r
    printf("Enter value for n: ");
    scanf("%d", &n);
    printf("Enter value for r: ");
    scanf("%d", &r);

    // Calculate and print nCr
    if (r <= n) {
        printf("%dC%d = %llu\n", n, r, nCr(n, r));
    } else {
        printf("Invalid input: r should be less than or equal to n.\n");
    }

    return 0;
}