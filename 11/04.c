#include <stdio.h>

#define RANGE ('Z' - 'A' + 1)

int process_line(FILE *fr, int occurences[]);

int main()
{
  FILE *fr;
  int array[RANGE];
  int c;
  int *p_arr;
  int i;
  int line;
  
  if ((fr = fopen("file.txt", "r")) == NULL) {
    printf("Can't open file.txt.\n");
    return 1;
  }

  // print char table row
  printf("   A B C D E F G H I J K L M N O P Q R S T U V W X Y Z\n");
  while ((line = process_line(fr, array)) <= 20) {
    printf("%2d ", line);
    for (i = 0; i < RANGE; i++) {
      printf("%1d ", array[i]);
    }
    printf("\n");
  }
  
  if (fclose(fr) == EOF) {
    printf("Couldn't close file.txt.\n");
  }
  
  return 0;
}


int process_line(FILE *fr, int occurences[]) {
  static int n_calls = 0;
  int c;
  int *p_arr;

  for (p_arr = occurences; p_arr < occurences + RANGE; p_arr++) {
    *p_arr = 0;
  }
  
  while ((c = getc(fr)) != '\n' && c != EOF) {
    c = c - 'A';
    if (c >= 0 && c < RANGE) {
      occurences[c]++;
    }
  }
  
  return ++n_calls;
}
