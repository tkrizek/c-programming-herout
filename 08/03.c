#include <stdio.h>

#define cubed(x) ((x) * (x) * (x))
#define is_upper(c) ((c) >= 'A' && (c) <= 'Z')
#define is_printable(c) ((c) >= 32 && (c) <= 126)
#define read_int

int main() {
  int i = 3;
  int j = 2;

  printf("%d\n%d\n%d\n%d\n", cubed(3), cubed(i), cubed(2 + 3), cubed(i * j + 1));
  printf("%d, %d, %d\n", is_upper('A'), is_upper('x'), is_upper('3'));

  for (i = 0; i < 128; i++) {
    if (is_printable(i)) {
      putchar(i);
    }
  }

  putchar('\n');
  
  return 0;
}
