#include <stdio.h>
int main(){
    int i, j;

    // upar vali pattern
    for (i = 1; i <= 7; i += 2) {
        for (j = 0; j < (7 - i) / 2; j++) {
            printf(" ");
        }
        for (j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // niche vali pattern
    for (i = 7 - 2; i >= 1; i -= 2) {
        for (j = 0; j < (7 - i) / 2; j++) {
            printf(" ");
        }
        for (j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}