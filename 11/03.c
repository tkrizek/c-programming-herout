#include <stdio.h>
#include "greetings.c"

#define RANGE 3

typedef void (*P_FN[])();

int main()
{
  P_FN p_greet = {hi, hello, good_morning};
  char codes[] = {'a', 'b', 'c'};
  int c, i;
  
  while((c = getchar()) != 'q') {
    for (i = 0; i < RANGE; i++) {
      if (c == codes[i]) {
	p_greet[i]();
      }
    }
  }
  
  return 0;
}
