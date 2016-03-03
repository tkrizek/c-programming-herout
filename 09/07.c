#include <stdio.h>

#define N_TERMINAL_LINES 24

void print_file(FILE *fr);
double print_file2();

int main()
{
  double ret;
  
  ret = print_file2();
  printf("Navratova hodnota: %f\n", ret);
  
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
    return 1.1;
  }

  print_file(fr);
  
  if (fclose(fr) == EOF) {
    printf("Nepodarilo se zavrit soubor %s!\n", filename);
    return 0.5;
  }

  if ((filename[0] == 'K' || filename[0] == 'k') && filename[1] == '\0') {
    return 2.2;
  }

  return 0.5;

}
