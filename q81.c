#include <stdio.h>

// Function to check if a number is prime
int isPrime(int number) {
    if (number <= 1) {
        return 0;
    }
    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num;

    // Test with various numbers
    printf("Enter a number to check if it is prime: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    // Additional tests
    int testNumbers[] = {2, 3, 4, 17, 18, 19, 20};
    int size = sizeof(testNumbers) / sizeof(testNumbers[0]);

    for (int i = 0; i < size; i++) {
        if (isPrime(testNumbers[i])) {
            printf("%d is a prime number.\n", testNumbers[i]);
        } else {
            printf("%d is not a prime number.\n", testNumbers[i]);
        }
    }

    return 0;
}