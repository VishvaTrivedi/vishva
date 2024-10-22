#include <stdio.h>

// Function to read an array and find the maximum value
int findMax(int arr[], int size) {
    int max = arr[0]; // Assume the first element is the maximum
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if a larger element is found
        }
    }
    return max;
}

int main() {
    int n;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare the array

    // Read the array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and print the maximum value
    int max = findMax(arr, n);
    printf("The maximum value in the array is: %d\n", max);

    return 0;
}