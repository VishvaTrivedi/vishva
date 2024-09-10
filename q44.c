#include <stdio.h>

int main() {
    float units, bill;

    printf("Enter the number of units consumed: ");
    scanf("%f", &units);

    if (units <= 200) {
        bill = units * 0.50;
    } else if (units <= 400) {
        bill = 100 + 200 * 0.65;
    } else if (units <= 600) {
        bill = 230 + 400 * 0.80;
    } else {
        bill = 425 + units * 125;
    }

    printf("The total electricity bill is: Rs. %f\n", bill);

    return 0;
}