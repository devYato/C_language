#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i = 0;

    // Read a string from the user
    printf("Enter a Text String: ");
    fgets(str, sizeof(str), stdin);

    // pass trough each character in the string
    while (str[i] != '\0') {
        // Check if the character is lowercase
        if (islower(str[i])) {
            printf("Lowercase character found: %c\n", str[i]);
            // Convert to uppercase
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            printf("Uppercase character found: %c\n", str[i]);
            // Convert to lowercase
            str[i] = tolower(str[i]);
        } else if (isdigit(str[i])) {
            printf("Digit found: %c\n", str[i]);
            // Convert digit to its ASCII value
            str[i] = str[i] + 48; // ASCII value of '0' is 48
        } else {
            printf("Special character found: %c\n", str[i]);
        }
        // Move to the next character
        i++;
    }
    printf("Modified String: %s", str);
}