#include<stdio.h>
//function to check if a number is even or odd
const char* check_even_odd(int number){
    if (number%2==0){
        return "Even";
    }
    else{
        return "Odd";
    }
}

int main(){
    int num;

    //input the number
    printf("Enter an integer: \n");
    scanf("%d", &num);

    //call the function and store the result
    const char* result = check_even_odd(num);

    //display the result
    printf("The number %d is %s \n", num, result);

    return 0;
}