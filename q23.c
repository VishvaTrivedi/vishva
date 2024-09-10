#include<stdio.h>
int main(){
    int base, power;
    float result=1;
    printf("enter base\n");
    scanf("%d", &base);
    printf("enter power\n");
    scanf("%d", &power);
    for(int i=1;i<=power;i++){
        result*=base;
    }
    printf("%d ^ %d = %f\n", base, power, result);
    return 0;
}