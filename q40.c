#include <stdio.h>

int main() {
    int num;
    int sum = 0;

    printf("Enter numbers :\n");

    while (1) {
        scanf("%d", &num);

        if (num < 0) {
            break;
        }

        sum += num;
    }

    printf("Sum of the entered numbers: %d\n", sum);

    return 0;
}