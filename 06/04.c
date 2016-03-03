#include <stdio.h>

int main()
{
  FILE *fr;
  FILE *fw;
  int c;
  int n;

  if ((fr = fopen("pismena.txt", "r")) == NULL) {
    printf("Nepodarilo se otevrit soubor pismena.txt\n");
    return 0;
  }
  
  if ((fw = fopen("kolik.txt", "w")) == NULL) {
    printf("Nepodarilo se otevrit soubor kolik.txt\n");
    return 0;
  }

  n = 0;
  while ((c = getc(fr)) != EOF) {
    putc(c, fw);
    if (c == '\n') {
      fprintf(fw, "%d\n", n);
      n = 0;
      continue;
    }
    n++;
  }
  
  if (fclose(fw) == EOF) {
    printf("Nepodarilo se uzavrit soubor kolik.txt\n");
  }
  
  if (fclose(fr) == EOF) {
    printf("Nepodarilo se uzavrit soubor znaky.txt\n");
    return 1;
  }
    
  return 0;
}
