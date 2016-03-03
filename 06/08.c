#include <stdio.h>

int main()
{
  FILE *fr;

  if ((fr = fopen("notexists.txt", "r")) == NULL) {
    printf("Nepodarilo se otevrit soubor notexists.txt\n");
    return 1;
  }
      
  if (fclose(fr) == EOF) {
    printf("Nepodarilo se uzavrit soubor notexitsts.txt\n");
  }
  
  return 0;
}
