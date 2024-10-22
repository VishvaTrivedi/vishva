#include <stdio.h>

// Function to check if the character is a vowel
int isVowel(char ch) {
    // Convert character to lowercase to handle both cases
    ch = ch | 32; // or use tolower(ch) from ctype.h
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        return 1; // It's a vowel
    }
    return 0; // It's not a vowel
}

int main() {
    char ch;

    // Input a character from the user
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check if the character is a vowel
    if (isVowel(ch)) {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is not a vowel.\n", ch);
    }

    return 0;
}