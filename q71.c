#include <stdio.h>

// Function to find the pivot element in a sorted and rotated array
int findPivot(int arr[], int low, int high) {
    // If the array is not rotated
    if (high < low) {
        return -1; // No pivot found
    }
    if (high == low) {
        return low; // Only one element
    }

    int mid = (low + high) / 2;

    // Check if mid is the pivot
    if (mid < high && arr[mid] > arr[mid + 1]) {
        return mid + 1; // Pivot found
    }
    if (mid > low && arr[mid] < arr[mid - 1]) {
        return mid; // Pivot found
    }

    // Decide whether to go to the left half or the right half
    if (arr[low] >= arr[mid]) {
        return findPivot(arr, low, mid - 1); // Search in left half
    }
    return findPivot(arr, mid + 1, high); // Search in right half
}

int main() {
    int arr[] = {4, 5, 6, 7, 0, 1, 2}; // Example sorted and rotated array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Find the pivot element
    int pivot = findPivot(arr, 0, n - 1);

    if (pivot != -1) {
        printf("The pivot element is: %d\n", arr[pivot]);
    } else {
        printf("No pivot element found.\n");
    }

    return 0;
}