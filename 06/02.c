#include <stdio.h>

int main()
{
  FILE *fr;
  FILE *fw;
  int c;

  if ((fr = fopen("pismena.txt", "r")) == NULL) {
    printf("Nepodarilo se otevrit soubor pismena.txt\n");
    return 0;
  }
  
  if ((fw = fopen("velky.txt", "w")) == NULL) {
    printf("Nepodarilo se otevrit soubor velky.txt\n");
    return 0;
  }

  while ((c = getc(fr)) != EOF) {
    putchar(c);
    c = (c >= 'a' && c <= 'z') ? c + 'A' - 'a' : c;
    putc(c, fw);
  }
  
  if (fclose(fw) == EOF) {
    printf("Nepodarilo se uzavrit soubor velky.txt\n");
  }
  
  if (fclose(fr) == EOF) {
    printf("Nepodarilo se uzavrit soubor znaky.txt\n");
    return 1;
  }
    
  return 0;
}
