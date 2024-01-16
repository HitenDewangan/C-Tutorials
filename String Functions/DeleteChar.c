#include <stdio.h>
#include <string.h>

int main() {
    // User input for the string
    char inputString[100];
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // User input for the character to delete
    char charToDelete;
    printf("Enter the character to delete: ");
    scanf(" %c", &charToDelete);

    // Delete occurrences of the character in the string
    int length = strlen(inputString);
    for (int i = 0; i < length; ++i) {
        if (inputString[i] == charToDelete) {
            for (int j = i; j < length; ++j) {
                inputString[j] = inputString[j + 1];
            }
            length--;
            i--;  // Adjust index after deletion
        }
    }

    // Print the modified string
    printf("String after deletion: %s", inputString);

    return 0;
}