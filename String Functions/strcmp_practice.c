// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str1[] = "Hello";
//     char str2[] = "World";
//     int result = strcmp(str1, str2);
//     printf("Comparison result: %d\n", result);
//     return 0;
// }
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char *ptr = strchr(str, 'o');
    printf("First occurrence of 'o' at position: %ld\n", ptr - str + 1);
    return 0;
}
