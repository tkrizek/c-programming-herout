#include <stdio.h>

#define RANGE ('Z' - 'A' + 1)

void hello(void);

int main()
{
  void (*p_hello)() = hello;
  int i;
  
  hello();
  hello();

  for (i = 0; i < 10; i++) {
    p_hello();
  }
  
  return 0;
}

void hello(void) {
  static int n_calls = 0;

  printf("%3d: hello\n", ++n_calls);
}
