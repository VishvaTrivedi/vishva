#include <stdio.h>

int main() {
    int N;

    printf("Enter the maximum value N: ");
    scanf("%d", &N);

    printf("Squares of numbers up to %d are:\n", N);
    
    for (int i = 1; i * i <= N; ++i) {
        printf("%d ", i * i);
    }
    printf("\n");

    return 0;
}