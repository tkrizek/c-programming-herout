#include <stdio.h>


int main() {
  float f, g;
  int i;

  scanf("%f%f", &f, &g);

  i = f + 1;
  if (i % 2 == 1) {
    i++;
  }
  
  for (; i < g; i += 2) {
    printf("%d\n", i);
  }
}
