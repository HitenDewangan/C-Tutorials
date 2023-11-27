#include <stdio.h>

int main() {
  char numStr[100];
  int sum = 0;

  // Take input as a string
  printf("Enter the number as a string: ");
  scanf("%s", numStr);

  // Calculate the sum of digits
  for (int i = 0; numStr[i] != '\0'; i++) {
    sum += numStr[i] - '0';
  }

  // Print the sum of digits
  printf("The sum of digits is: %d\n", sum);

  return 0;
}
