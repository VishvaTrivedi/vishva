#include <stdio.h>
#include <math.h>

int main() {
    int num, ognum, remainder, result = 0, n = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    ognum = num;

    while (ognum != 0) {
        ognum /= 10;
        n++;
    }

    ognum = num;

    while (ognum != 0) {
        remainder = ognum % 10;
        result += pow(remainder, n);
        ognum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}