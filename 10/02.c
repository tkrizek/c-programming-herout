#include <stdio.h>

int set(char *p_in, char *p_out);

int main(void)
{
  char c_in = 'a', c_out;
  int res, i;

  for (i = 0; i < 3; i++) {
    switch (i) {
    case 0:
      c_in = 'a';
      break;
    case 1:
      c_in = 'Z';
      break;
    case 2:
      c_in = '3';
      break;
    default:
      break;
    }
    res = set(&c_in, &c_out);
    printf("res: %d, c_out: %c\n", res, c_out);
  }
  
  return 0;
}

int set(char *p_in, char *p_out)
{
  if (*p_in >= 'a' && *p_in <= 'z') {
    *p_out = *p_in + 'A' - 'a';
    return 1;
  } else if (*p_in >= 'A' && *p_in <= 'Z') {
    *p_out = *p_in + 'a' - 'A';
    return 1;
  } else {
    *p_out = *p_in;
    return 0;
  }
}
