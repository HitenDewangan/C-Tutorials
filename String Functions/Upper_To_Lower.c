#include <stdio.h>

void convertCase(char *str) {
    while (*str != '\0') {
        if (*str >= 'a' && *str <= 'z') {
            // Convert lowercase to uppercase
            *str = *str - ('a' - 'A');
        } else if (*str >= 'A' && *str <= 'Z') {
            // Convert uppercase to lowercase
            *str = *str + ('a' - 'A');
        }
        str++;
    }
}

int main() {
    char inputString[1004];  // Assuming the length of the string will not exceed 103
    printf("Enter a string: ");
    scanf("%s", inputString);

    convertCase(inputString);

    printf("Converted string: %s\n", inputString);

    return 0;
}
