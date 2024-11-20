#include <stdio.h>
#include <string.h>

// Function to swap two characters
void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

// Function to reverse a substring
void reverse(char *begin, char *end) {
    while (begin < end) {
        swap(begin, end);
        begin++;
        end--;
    }
}

// Function to find the next lexicographical permutation
int nextPermutation(char *word) {
    int len = strlen(word);
    int i = len - 2;

    // Find the first character that is smaller than its next character
    while (i >= 0 && word[i] >= word[i + 1]) {
        i--;
    }

    // If there is no such character, the word is the highest permutation
    if (i < 0) {
        return 0; // No next permutation
    }

    int j = len - 1;

    // Find the smallest character on the right of i that is larger than word[i]
    while (word[j] <= word[i]) {
        j--;
    }

    // Swap characters at i and j
    swap(&word[i], &word[j]);

    // Reverse the sequence from i+1 to the end of the string
    reverse(word + i + 1, word + len - 1);

    return 1; // Next permutation found
}

int main() {
    char word[100];

    printf("Enter a word: ");
    scanf("%s", word);

    if (nextPermutation(word)) {
        printf("The next lexicographical permutation is: %s\n", word);
    } 
    else {
        printf("No next lexicographical permutation exists.\n");
    }

    return 0;
}