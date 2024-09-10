#include <stdio.h>

int main() {
    int N, i, prime = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &N);

    if (N <= 1) {
        printf("%d is neither prime nor composite.\n", N);;
    }

    for (i = 2; i <= N / 2; ++i) {
        if (N % i == 0) {
            prime = 1;
            break;
        }
    }

    if (prime == 0) {
        printf("%d is a prime number.\n", N);
    } else {
        printf("%d is a composite number.\n", N);
    }

    return 0;
}