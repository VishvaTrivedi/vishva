#include <stdio.h>

int main() {
    int arr[10];
    int even = 0, odd = 0;
    
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("Total even elements: %d\n", even);
    printf("Total odd elements: %d\n", odd);
    
    return 0;
}