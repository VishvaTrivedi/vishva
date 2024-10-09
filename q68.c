#include <stdio.h>
 int main(){
 int arr1[3][3],arr2[3][3],arr3[3][3],sum=0;
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
    printf("Multiplication of matrixes is :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
            sum+=arr1[i][k]*arr2[k][j];
            }
            arr3[i][j]=sum;
            printf("%d \t",arr3[i][j]);
            sum=0;
        }
        printf("\n");
    }
    return 0;
}