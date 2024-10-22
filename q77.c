#include<stdio.h>
//function to check if a number i palindrome
int is_palindrome(int number){
    int reversed = 0, original = number, remainder;

    //reverse the number
    while(number !=0){
        remainder = number % 10;
        reversed = reversed*10 + remainder;
        number /= 10;
    }

    //check if the original number is same as its reverse
    if(original == reversed){
        reurn 1;
    }
    else{
        return 0;
    }
}

int main(){
    int num;

    //input number
    printf("Enter an integer: \n");
    scanf("%d", &num);

    //call function and check the result
    if(is_palindrome(num)){
        printf("The num %d is a palindrome \n", num);
    }
    else{
        printf("The number %d is not a palindrome\n", num);
    }

    return 0;
}