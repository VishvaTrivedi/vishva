#include<stdio.h>
int main(){
    //read the number of test cases
    int T;
    scanf("%d", &T);
    for (int i=0; i < T; i++){
        //read the number N
        int N;
        scanf("%d", &N);

        int temp = N;
        int count = 0;

        //extract the last digit of N
        while (temp>0){
            int digit = temp % 10;
            temp /= 10;

            //check if the digit is not 0 and divides N
            if(digit != 0 && N % digit == 0){
                count++;
            }
        }

        //print the result for the current test case
        printf("%d\n", count);
    }
    return 0;
}