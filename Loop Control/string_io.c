#include <stdio.h>

int main() {
  char str[100]; // Declare a character array to store the string
  int length = 0; // Variable to store the string length

  printf("Enter a string: ");
  gets(str); // Get the string input

  // Loop through the string until '\0' is encountered
  for (int i = 0; str[i] != '\0'; i++) {
    length++; // Increment the length counter
  }

  printf("The length of the string is: %d\n", length);

  return 0;
}

// #include <stdio.h>

// int main() {
//   char str[100];
//   int length = 0;

//   printf("Enter a string: ");
//   scanf("%s", str);

//   while (str[length] != '\0') {
//     length++;
//   }

//   printf("The length of the string is: %d\n", length);

//   return 0;
// }