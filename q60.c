#include <stdio.h>
int main()
{
    int arr[]={25,89,87,6,3};
    printf("Original array:\n");
    for(int i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    for(int i=0;i<4;i++){
        int minindex=i;
        int holder=arr[i];
        for(int j=i+1;j<5;j++){
            if(arr[i]>arr[j]){
                arr[i]=arr[j];
                minindex=j;
            }
        }
        arr[minindex]=holder;
        }
    printf("Sorted array:\n");
    for(int i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}