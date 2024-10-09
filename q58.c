#include <stdio.h>
 int main(){
 int arr1[10];
 int arr2[10];
 int arr3[10];
  printf("Enter integers for array1:\n");
    for(int i=0;i<10;i++){
        printf("Number [%d] :",i+1);
            scanf("%d",&arr1[i]);
     }
    printf("Enter integers for array2:\n");
    for(int i=0;i<10;i++){
        printf("Number [%d] :",i+1);
            scanf("%d",&arr2[i]);
     }
     printf("Sum of arrays is :\n");
     for(int i=0;i<10;i++){
        arr3[i]=arr1[i]+arr2[i];
        printf("%d\n",arr3[i]);
     }
 }