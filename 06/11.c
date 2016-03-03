#include <stdio.h>

int main()
{
  FILE *fr;
  double r;
  double total = 0;
  char c;
  int read;

  if ((fr = fopen("cisla.txt", "r")) == NULL) {
    printf("Nepodarilo se otevrit soubor cisla.txt\n");
    return 1;
  }

  while(1) {
    while ((c = getc(fr)) == '$');
    if (c == EOF) {
      break;
    }
    ungetc(c, fr);
    read = fscanf(fr, "%lf\n", &r);
    total += r;
  }

  printf("Soucet: %f", total);

  if (fclose(fr) == EOF) {
    printf("Nepodarilo se zavrit soubor cisla.txt\n");
  }
  
  return 0;
}
