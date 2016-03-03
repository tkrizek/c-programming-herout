#include <stdio.h>

int main()
{
  FILE *fw;
  double f;
  int i;

  if ((fw = fopen("cisla.txt", "w")) == NULL) {
    printf("Nepodarilo se otevrit soubor cisla.txt\n");
    return 0;
  }

  for (i = 0; i < 20; i++) {
    fprintf(fw, "$%.2f\n", 3.14 * (i + 1));
  }
  
  if (fclose(fw) == EOF) {
    printf("Nepodarilo se uzavrit soubor cisla.txt\n");
  }
      
  return 0;
}
