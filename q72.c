#include <stdio.h>

// Function to rotate the array to the right by N positions
void rotateArray(int arr[], int n, int positions) {
    positions = positions % n; // In case positions > n
    int temp[positions]; // Temporary array to hold the last 'positions' elements

    // Store the last 'positions' elements in the temporary array
    for (int i = 0; i < positions; i++) {
        temp[i] = arr[n - positions + i];
    }

    // Shift the remaining elements to the right
    for (int i = n - 1; i >= positions; i--) {
        arr[i] = arr[i - positions];
    }

    // Place the elements from the temporary array back into the rotated positions
    for (int i = 0; i < positions; i++) {
        arr[i] = temp[i];
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]);
    int positions;

    // Input number of positions to rotate
    printf("Enter number of positions to rotate the array: ");
    scanf("%d", &positions);

    // Print original array
    printf("Original array: ");
    printArray(arr, n);

    // Rotate the array
    rotateArray(arr, n, positions);

    // Print rotated array
    printf("Rotated array: ");
    printArray(arr, n);

    return 0;
}