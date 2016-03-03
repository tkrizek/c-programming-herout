#include <stdio.h>

long read_char(FILE *fr, int *p_c);

int main(void) {
  FILE *fr;
  int c;
  int len;

  if ((fr = fopen("file.txt", "r")) == NULL) {
    printf("Can't open file.txt.\n");
    return 1;
  }

  while (len = read_char(fr, &c), c != EOF) {
    printf("%c", c);
  }

  printf("\nPocet znaku: %d\n", len - 1);

  return 0;  
}

long read_char(FILE *fr, int *p_c) {
  static int n_calls = 0;

  *p_c = getc(fr);
  
  return ++n_calls;
}
