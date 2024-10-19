#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100];
    char outputString[100];
    int i, j = 0;

    printf("Enter a string: ");
    gets(inputString);

    // Iterate through the input string
    for (i = 0; inputString[i] != '\0'; i++) {
        // Check if the current character is not a space
        if (inputString[i] != ' ') {
            // Copy the non-space character to the output string
            outputString[j++] = inputString[i];
            } 
    }

    // Null-terminate the output string
    outputString[j] = '\0';

    printf("String with spaces removed: %s\n", outputString);

    return 0;
}
