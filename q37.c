#include <stdio.h>

int main() {
    int N;

    printf("Enter the maximum value N: ");
    scanf("%d", &N);

    printf("Even numbers from 2 to %d are:\n", N);
    for (int i = 2; i <= N; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}