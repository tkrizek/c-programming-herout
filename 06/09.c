#include <stdio.h>

int main()
{
  FILE *fr;
  FILE *fw;
  int c;

  if ((fr = fopen("pismena.txt", "r")) == NULL) {
    printf("Nepodarilo se otevrit soubor pismena.txt\n");
    return 1;
  }

  printf("Pro vypis na obrazovku zadejde 'o', jinak cokoliv: ");
  c = getchar();
  if (c == 'o') {
    fw = stdout;
  }
  else {
    if ((fw = fopen("novy.txt", "w")) == NULL) {
      printf("Nepodarilo se otevrit soubor novy.txt\n");
      return 1;
    }
  }

  while ((c = getc(fr)) != EOF) {
    putc(c, fw);
  }
    
  if (fw != stdout) {
    if (fclose(fw) == EOF) {
      printf("Nepodarilo se uzavrit soubor novy.txt\n");
    }
  }
  
  if (fclose(fr) == EOF) {
    printf("Nepodarilo se uzavrit soubor pismena.txt\n");
  }
  
  return 0;
}
