#include <stdio.h>

void print_triangle(char c, int n);
void print_chars(char c, int n);

int main()
{
  print_triangle('*', 5);
  return 0;
}

void print_triangle(char c, int n)
{
  int i = 0;

  for (i = 0; i < n; i++) {
    print_chars(' ', n - i - 1);
    print_chars('*', 1 + 2 * i);
    printf("\n");
  }
}

void print_chars(char c, int n) {
  int i;
  for (i = 0; i < n; i++) {
    putchar(c);
  }
}
