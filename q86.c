#include <stdio.h>

// Function to calculate the length of a string
int stringLength(const char *str) {
    int length = 0;
    while (str[length] != '\0') { // Count until the null terminator
        length++;
    }
    return length;
}

int main() {
    char text[100]; // Array to hold the input text

    // Input a line of text from the user
    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin); // Read a line of text

    // Calculate the length of the string
    int length = stringLength(text);

    // Display the length of the string
    printf("The length of the entered string is: %d\n", length);

    return 0;
}