#include<stdio.h>

int main() {
    float principal, rate, time, interest;

    printf("Enter the principal amount: ",principal);
    scanf("%f", &principal);

    printf("Enter the rate of interest: ",rate);
    scanf("%f", &rate);

    printf("Enter the time in years: ",time);
    scanf("%f", &time);

    interest = (principal * rate * time) / 100;

    printf("The Simple Interest is: %f\n", interest);

    return 0;
}