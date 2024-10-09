#include <stdio.h>
//Bubble sort
int main()
{
    int arr[]={21,6,78,56,34,15};
    int n=6;//number of elements in an array.
    printf("Original array:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int holder=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=holder;
            }
        }
    }
    printf("\nSorted array:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}