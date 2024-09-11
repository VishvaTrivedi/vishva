#include <stdio.h>
int main(){
    int n,num,max,min;
    printf("Enter the number of Elements: ");
    scanf("%d",&n);
    if(n<=0){
        printf("Please enter valid number of elements.\n");
        return 1;
    }
    printf("Enter number 1: ");
    scanf("%d",&num);
    max=num;
    min=num;

    for(int i=2;i<=n;i++){
        printf("Enter number 2: ");
        scanf("%d",&num);

        if(num>max){
            max=num;
        }
        if(num<min){
            min=num;
        }
    }
    printf("Maximum number: %d\n",max);
    printf("Minimum number: %d\n",min);
    return 0;
}