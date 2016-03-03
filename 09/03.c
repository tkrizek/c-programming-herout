#include <stdio.h>

int exist();

int main()
{
  printf("%d\n", exist());
  return 0;
}

int exist()
{
  FILE *f;

  if ((f = fopen("TEST.TXT", "r")) == NULL) {
    return 0;
  }

  fclose(f);
  return 1;
}


