#include <stdio.h>

int main() {
    int arr[10];
    int positive = 0, negative = 0, zero = 0;
 
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < 10; i++) {
        if (arr[i] > 0) {
            positive++;
        } else if (arr[i] < 0) {
            negative++;
        } else {
            zero++;
        }
    }
 
    printf("Positive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Zeroes: %d\n", zero);
    
    return 0;
}