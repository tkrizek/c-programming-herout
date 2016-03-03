#include <stdio.h>

int occurance(FILE *f, char find);

int main()
{
  FILE *fr;
  char c = 'x';

  if ((fr = fopen("test.txt", "r")) == NULL) {
    printf("Nepodarilo se otevrit soubor test.txt!\n");
    return 1;
  }

  printf("Pocet vyskytu znaku '%c' v souboru test.txt: %d\n", c,
	 occurance(fr, c));

  if (fclose(fr) == EOF) {
    printf("Nepodarilo se zavrit soubor test.txt!\n");
    return 1;
  }
  
  return 0;
}

int occurance(FILE *f, char find)
{
  char c;
  int n = 0;
  
  while ((c = getc(f)) != EOF) {
    if (c == find) {
      n++;
    }
  }

  return n;
}
