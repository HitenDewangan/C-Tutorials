#include <stdio.h>

long int decimalToOctal(long int decimalNum) {
  long int octalNum = 0, i = 1;

  // Repeatedly divide by 8 and store remainders in reverse order
  while (decimalNum > 0) {
    octalNum += (decimalNum % 8) * i;
    decimalNum /= 8;
    i *= 10; // Shift position for next digit
  }

  return octalNum;
}

int main() {
  long int decimalNum;

  printf("Enter a decimal number: ");
  scanf("%ld", &decimalNum);

  // Convert decimal to octal using the function
  long int octalNum = decimalToOctal(decimalNum);

  printf("Octal equivalent: %ld\n", octalNum);

  return 0;
}
