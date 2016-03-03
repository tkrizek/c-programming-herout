#include <stdio.h>

#define N 5 /* amount of numbers to sum */

int main() {
  int total = 0;
  int i;

  for (i = 1; i <= N; i++) {
    total += i;
  }

  printf("Sum of the first %d natural numbers is %d.\n", N, total);

  return 0;
}
