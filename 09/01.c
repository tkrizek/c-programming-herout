#include <stdio.h>

void print_powers(double base, int max_power);

int main()
{
  print_powers(1.9, 4);
  return 0;
}

void print_powers(double base, int max_power)
{
  int i;
  double current = 1;
  for (i = 1; i <= max_power; i++) {
    current *= base;
    printf("%f\n", current);
  }
}
