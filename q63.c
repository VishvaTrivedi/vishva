#include <stdio.h>
int main(){
    int arr[3][3];
    int max,min;
    printf("Enter integers for 3*3 matrix:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Number [%d][%d] :",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    max=min=arr[0][0];
    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
    }
    printf("Maximum element of matrix is:%d\n",max);
    printf("Minimum element of matrix is:%d\n",min);
    return 0;
}