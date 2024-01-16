//to print a sum series using SumSeries function with a to the power n
#include <stdio.h>
#include<math.h>

double SumSeries(double a, int n) {
  int sum = 0;
  for (int i = 0; i <= n; ++i) {
    sum += pow(a, i);
  }
  return sum;
}

int main() {
  double a; int result;
  int n;

  // Get input values from user
  printf("Enter value of a: ");
  scanf("%lf", &a);
  printf("Enter value of n: ");
  scanf("%d", &n);

  // Calculate and print the sum
  result = SumSeries(a, n);
  printf("The sum of the series (a^0 + a^1 + ... + a^n) is: %d\n", result);

  return 0;
}
