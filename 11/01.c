#include <stdio.h>

#define RANGE ('Z' - 'A' + 1)

int main()
{
  FILE *fr;
  int array[RANGE];
  int c;
  int *p_arr;
  int i;

  for (p_arr = array; p_arr < array + RANGE; p_arr++) {
    *p_arr = 0;
  }
  
  if ((fr = fopen("file.txt", "r")) == NULL) {
    printf("Can't open file.txt.\n");
    return 1;
  }

  while ((c = getc(fr)) != EOF) {
    c = c - 'A';
    if (c >= 0 && c < RANGE) {
      array[c]++;
    }
  }

  // print char histogram
  for (p_arr = array; p_arr < array + RANGE; p_arr++) {
    printf("%c: %2d ", p_arr - array + 'A', *p_arr);
    for (i = 0; i < *p_arr; i++) {
      printf("*");
    }
    printf("\n");
  }
  
  if (fclose(fr) == EOF) {
    printf("Couldn't close file.txt.\n");
  }
  
  return 0;
}
