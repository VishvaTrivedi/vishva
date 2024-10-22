#include <stdio.h>

// Function to interchange the values of two variables
void exchange(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    // Input values for x and y
    printf("Enter value for x: ");
    scanf("%d", &x);
    printf("Enter value for y: ");
    scanf("%d", &y);

    // Print values before exchange
    printf("Before exchange: x = %d, y = %d\n", x, y);

    // Call the exchange function
    exchange(&x, &y);

    // Print values after exchange
    printf("After exchange: x = %d, y = %d\n", x, y);

    return 0;
}