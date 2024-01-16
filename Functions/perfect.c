//Here's a C program in that checks whether a positive number equals the sum of its proper divisors (excluding itself)

#include <stdio.h>

int is_perfect_number(int n) {
  if (n <= 1) {
    return 0; // 1 and 0 are not perfect numbers
  }

  int sum = 0;
  for (int i = 1; i < n; ++i) {
    if (n % i == 0) {
      sum += i;
    }
  }

  return sum == n; // Check if sum of divisors equals the number
}

int main() {
  int number;

  printf("Enter a positive number: ");
  scanf("%d", &number);

  if (is_perfect_number(number)) {
    printf("%d is a perfect number\n", number);
  } else {
    printf("%d is not a perfect number\n", number);
  }

  return 0;
}
