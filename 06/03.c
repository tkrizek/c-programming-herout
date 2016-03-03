#include <stdio.h>

int main()
{
  FILE *fr;
  int n = 0;

  if ((fr = fopen("pismena.txt", "r")) == NULL) {
    printf("Nepodarilo se otevrit soubor pismena.txt\n");
    return 0;
  }

  while (getc(fr) != EOF) {
    n++;
  }

  printf("Pocet znaku: %d\n", n);

  if (fclose(fr) == EOF) {
    printf("Nepodarilo se uzavrit soubor znaky.txt\n");
    return 1;
  }
    
  return 0;
}
