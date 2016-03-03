#include <stdio.h>

int main()
{
  FILE *fr;
  FILE *fr2;
  int diff = 0;
  int c1, c2;

  if ((fr = fopen("pismena.txt", "r")) == NULL) {
    printf("Nepodarilo se otevrit soubor pismena.txt\n");
    return 1;
  }

  if ((fr2 = fopen("pismena2.txt", "r")) == NULL) {
    printf("Nepodarilo se otevrit soubor pismena2.txt\n");
    return 1;
  }

  do {
    c1 = getc(fr);
    c2 = getc(fr2);
    if (c1 != c2) {
      diff++;
    }
  } while (!(c1 == EOF && c2 == EOF));

  if (diff == 0) {
    printf("Soubory jsou shodne.\n");
  }
  else {
    printf("Soubory se lisi v %d znacich.\n", diff);
  }
  
  if (fclose(fr) == EOF) {
    printf("Nepodarilo se uzavrit soubor pismena.txt\n");
  }
      
  if (fclose(fr2) == EOF) {
    printf("Nepodarilo se uzavrit soubor pismena2.txt\n");
  }
  
  return 0;
}
