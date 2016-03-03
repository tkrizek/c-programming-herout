#include <stdio.h>

int main()
{
  FILE *fr;
  int c;

  if ((fr = fopen("znaky.txt", "r")) == NULL) {
    printf("Nepodarilo se otevrit soubor znaky.txt\n");
    return 0;
  }

  do {
    c = getc(fr);
    switch(c) {
    case '0':
      printf("Byla to nula\n");
      break;
    case '1':
      printf("Byla to jednicka\n");
      break;
    default:
      break;
    }
  } while (c != 'q' && c != EOF);
  
  if (fclose(fr) == EOF) {
    printf("Nepodarilo se uzavrit soubor znaky.txt\n");
    return 1;
  }
  
  return 0;
}
