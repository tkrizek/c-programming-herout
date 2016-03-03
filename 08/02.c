#include <stdio.h>
#include <ctype.h>

#define EOLN '\n'

int main() {
  int ndigits = 0;
  int c;

  while ((c = getchar()) != EOLN) {
    if (isdigit(c)) {
      ndigits++;
    } else if (isalpha(c)) {
      putchar(toupper(c));
    }
  }

  printf("\nDigits entered: %d\n", ndigits);
  
  return 0;
}
