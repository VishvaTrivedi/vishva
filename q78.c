#include <stdio.h>
#include <math.h>

// Function to calculate the number of digits in a number
int countDigits(int number) {
    int count = 0;
    while (number != 0) {
        count++;
        number /= 10;
    }
    return count;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int number) {
    int originalNumber, remainder, result = 0, n = 0;
    originalNumber = number;
    n = countDigits(number);

    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    // Check if the result is equal to the original number
    return (result == number);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}