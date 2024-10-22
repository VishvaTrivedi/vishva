#include <stdio.h>

void mergeArrays(int A[], int sizeA, int B[], int sizeB, int C[]) {
    int i = 0, j = 0, k = 0;

    // Merge both arrays into C
    while (i < sizeA && j < sizeB) {
        if (A[i] < B[j]) {
            C[k++] = A[i++];
        } else {
            C[k++] = B[j++];
        }
    }

    // Copy remaining elements of A, if any
    while (i < sizeA) {
        C[k++] = A[i++];
    }

    // Copy remaining elements of B, if any
    while (j < sizeB) {
        C[k++] = B[j++];
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int A[] = {1, 3, 5, 7}; // Example sorted array A
    int B[] = {2, 4, 6, 8}; // Example sorted array B
    int sizeA = sizeof(A) / sizeof(A[0]);
    int sizeB = sizeof(B) / sizeof(B[0]);
    int C[sizeA + sizeB]; // Array to hold the merged result

    // Merge arrays A and B into C
    mergeArrays(A, sizeA, B, sizeB, C);

    // Print the merged array
    printf("Merged sorted array C: ");
    printArray(C, sizeA + sizeB);

    return 0;
}