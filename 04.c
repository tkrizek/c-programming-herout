#include <stdio.h>

int main() {
  /* 01 */
  /*
  printf("James Bond \\ \"Agent 007\" \\ # 150%% zaruka # /\nSpol. s rucenim neomezenym\n");
  */

  /* 02 */
  /*
  char c;
  scanf("%c", &c);
  c++;
  printf("%c (ASCII %d)\n", c, c);
  */

  /* 03 */
  /*
  unsigned char i;
  scanf("%u", &i);
  printf("%2Xh", i);
  */

  /* 04 */
  /*
  unsigned int price;
  printf("Zadejte cenu bez dane: ");
  scanf("%u", &price);
  price *= 1.25;
  printf("Prodejni cena s dani (25%%): %u\n", price);
  */

  /* 05 */
  /*
  unsigned int a, b;
  printf("Zadejte delku a sirku: ");
  scanf("%u%u", &a, &b);
  printf("Obdelnik o delce %u a sirce %u ma obsah %u\n", a, b, a*b);
  */

  /* 06 */
  /* int a = 2, b = 2, c = 1, d = 0, e = 4; */
  /* printf("%d\n", a++ / ++c * --e); */
  /* printf("%d\n", --b * c++ - a); */
  /* printf("%d\n", -b - --c); */
  /* printf("%d\n", ++a - --e); */
  /* printf("%d\n", e / --a * b++ / c++); */
  /* printf("%d\n", a %= b = d = 1 + e / 2); */

  /* 07 */
  /*
  float f;
  int i;
  scanf("%f", &f);
  printf("%.0f\n", f);
  i = f;
  printf("%d", i);
  */

  /* 08 */
  /*
  char a, b, c;
  scanf("%c%c%c", &a, &b, &c);
  a = a + 'a' - 'A';
  b = b + 'a' - 'A';
  c = c + 'a' - 'A';
  printf("%c%c%c\n", a, b, c);
  */

  /* 09 */
  /*
  char a, b, c;
  scanf("%c%c%c", &a, &b, &c);
  a = a - 'a' + 'A';
  b = b - 'a' + 'A';
  c = c - 'a' + 'A';
  printf("%c%c%c\n", c, b, a);
  */

  /* 10 */
  /*
  int i = -1;
  unsigned int j = i;
  j /= 2;
  printf("%u %d\n", i, j);
  */

  /* 11 */
  /*
  short a = -1;
  long b = -1;
  printf("%u %d %lu %ld\n", (unsigned short)a, (unsigned short)a/2, (unsigned long)b, (unsigned long)b/2);
  */

  /* 12 */
  /*
  int i = 4;
  int j = 3;
  float f = 3.14;
  printf("%d %d %f %f\n", i/j, j/i, j/f, f/j);
  */

  /* 13 */
  /*
  float a, b, c;
  scanf("%f%f%f", &a, &b, &c);
  printf("%.2f\n", (a + b + c) / 3);
  */

  /* 14 */
  /*
  printf("\007");
  */
  
  return 0;
}
