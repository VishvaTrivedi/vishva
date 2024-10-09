#include <stdio.h>
 int main(){
 int arr1[3][3];
 int arr2[3][3];
 int arr3[3][3];
 
 printf("Enter integers for 3*3 matrix 1:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Number [%d][%d] :",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter integers for 3*3 matrix 2:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Number [%d][%d] :",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }

    printf("Subtraction of matrixes is :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr3[i][j]=arr1[i][j]-arr2[i][j];
            printf("%d \t",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}