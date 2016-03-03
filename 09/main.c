#include "fce.h"

int main()
{
  double ret;

  do {
    ret = print_file2();
  } while (ret != 2.2);
  
  return 0;
}
