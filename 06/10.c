#include <stdio.h>

int main() {
  int i;
  int n;
  char c;

  do {
    for (i = 0; i < 10; i++) {
      printf("%d\n", ++n);
    }
    printf("Mam pokracovat? [a/N]: ");
    c = getchar();
    while (getchar() != '\n');  // remove additional characters
  } while (c == 'A' || c == 'a');
  return 0;
}
