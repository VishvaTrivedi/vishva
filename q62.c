#include<stdio.h>
int main(){
    int i;
    int number[] = {1,2,3,4,5,6,7,8,9,10};

    for(i=0;i<5;i++){
        int num=number[i];
        number[i]=number[9-i];
        number[9-i]=num;
    }

    for(i=0;i<10;i++){
        printf("%d", number[i]);
    }
    printf("\n");

    return 0;
   
}