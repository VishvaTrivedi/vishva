#include<stdio.h>
int main(){
 int n, i;
 float numbers[100], max, min;
 printf("Enter the value of n :\n");
 scanf("%d", &n);

if(n>100 || n<=0){
    printf("invalid number of elements");
}
 printf("enter %d numbers", n);
 for(i=0;i<n;i++){
    scanf("%f", &numbers[i]);
 }
 
 max=min=numbers[0];
 for(i=0;i<n;i++){
    if(numbers[i]>max){
        max=numbers[i];
    }
    if(numbers[i]<min){
        min=numbers[i];
    }
 }
 printf("maximum value is %f\n", max);
 printf("minimum value is %f\n", min);

 return 0;

}