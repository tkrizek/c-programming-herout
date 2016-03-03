#include <stdio.h>

#define N_TERMINAL_LINES 24

#define filename_is_k(filename) (((filename[0]) == 'K' || (filename[0]) == 'k') && (filename[1]) == '\0')

void print_file(FILE *fr);
double print_file2();

int main()
{
  double ret;

  do {
    ret = print_file2();
  } while (ret != 2.2);
  
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

double print_file2()
{
  char filename[100];
  FILE *fr;
  
  printf("Zadejte jmeno souboru: ");
  scanf("%s", filename);

  if ((fr = fopen(filename, "r")) == NULL) {
    printf("Soubor %s nebyl nalezen!\n", filename);
    return filename_is_k(filename) ? 2.2 : 1.1;
  }

  print_file(fr);
  
  if (fclose(fr) == EOF) {
    printf("Nepodarilo se zavrit soubor %s!\n", filename);
    return 0.5;
  }

  if (filename_is_k(filename)) {
    return 2.2;
  }

  return 0.5;

}
