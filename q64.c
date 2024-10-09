#include <stdio.h>
int main(){
    int arr[3][3];
    int sum1=0,sum2=0,sum3=0;
    
    printf("Enter integers for 3*3 matrix:\n");
    for(int i=0;i<3;i++){
        
        for(int j=0;j<3;j++){
            printf("Number [%d][%d] :",i,j);
            scanf("%d",&arr[i][j]);
           if(i==0){
            sum1+=arr[i][j];
           }
           else if(i==1){
            sum2+=arr[i][j];
           }
           else{
            sum3+=arr[i][j];
           }
        }
        
    }
    printf("Sum of first row =%d\n",sum1);
    printf("Sum of second row =%d\n",sum2);
    printf("Sum of third row =%d\n",sum3);

    return 0;
}