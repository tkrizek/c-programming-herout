#include <stdio.h>

int main()
{
  FILE *fr;
  double f;
  double total = 0;
  double n = 0;

  if ((fr = fopen("cisla.txt", "r")) == NULL) {
    printf("Nepodarilo se otevrit soubor cisla.txt\n");
    return 0;
  }

  while (fscanf(fr, "$%lf\n", &f) == 1) {
    total += f;
    n++;
  }

  printf("Aritmeticky prumer: %f\n", total / n);
  
  if (fclose(fr) == EOF) {
    printf("Nepodarilo se uzavrit soubor cisla.txt\n");
  }
      
  return 0;
}
