#include <stdio.h>

// Function to generate and print the first N Fibonacci numbers
void printFibonacci(int N) {
    int a = 0, b = 1, next;
    
    printf("First %d Fibonacci numbers: ", N);
    for (int i = 1; i <= N; ++i) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int N;

    // Test for N=5
    N = 5;
    printFibonacci(N);

    // Test for N=10
    N = 10;
    printFibonacci(N);

    // Test for N=15
    N = 15;
    printFibonacci(N);

    return 0;
}