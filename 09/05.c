#include <stdio.h>

#define N_TERMINAL_LINES 24

void print_file(FILE *fr);

int main()
{
  FILE *fr;

  if ((fr = fopen("test.txt", "r")) == NULL) {
    printf("Nepodarilo se otevrit soubor test.txt!\n");
    return 1;
  }

  print_file(fr);

  if (fclose(fr) == EOF) {
    printf("Nepodarilo se zavrit soubor test.txt!\n");
    return 1;
  }
  
  return 0;
}

void print_file(FILE *fr)
{
  char c;
  int i = 1;
  while ((c = getc(fr)) != EOF) {
    if (i == N_TERMINAL_LINES) {
      while (getchar() != '\n')
	;
      i = 1;
    }
    putchar(c);
    if (c == '\n') {
      i++;
    }
  }
}
