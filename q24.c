#include<stdio.h>
int main()
{
    int y, x, n;
    printf("enter the value of n");
    scanf("%d", &n);
    if (n=1){
        printf("y=1+x");
    }
    else if (n=2){
        printf("y=1+x/n");
    }
    else if (n=3){
        printf("y=x^n");
    }
    else {
        printf("y=1+nx");
    }
    return 0;
}