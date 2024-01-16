#include <stdio.h>

void my_strcat(char *dest, const char *src) {
  // Find the end of the destination string
  while (*dest) {
    dest++;
  }

  // Copy the source string to the destination
  while (*src) {
    *dest = *src;
    dest++;
    src++;
  }

  // Add the null terminator
  *dest = '\0';
}

int main() {
  char dest[100] = "Hello";
  const char src[] = "World";

  my_strcat(dest, src);

  printf("The concatenated string is: %s\n", dest);

  return 0;
}
