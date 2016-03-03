#include <stdio.h>

#define LENGTH 10

void sort(int x[], int y[], int length);
int get_even(int x[], int y[], int length);
void print_array(int x[], int length);


int main()
{
  int array[] = {4, 4, 1, 2, 3, 3, 0, 2, 1, 4};
  int sorted[LENGTH];
  int even[LENGTH];
  int length = 0;
  int *p_a;

  sort(array, sorted, LENGTH);
  print_array(array, LENGTH);
  print_array(sorted, LENGTH);

  length = get_even(array, even, LENGTH);
  print_array(even, length);

  return 0;
}

void sort(int x[], int y[], int length) {
  int i, j;
  int *p_x, *p_y;
  int tmp;

  // copy array
  for (p_x = x, p_y = y; p_x < x + length;) {
    *p_y++ = *p_x++;
  }

  //bubble sort
  for (i = length-1; i > 0; i--) {
    for (j = 0; j < i-1; j++) {
      if (y[j] > y[j+1]) {
  	tmp = y[j];
  	y[j] = y[j+1];
  	y[j+1] = tmp;
      }
    }
  }
}


int get_even(int x[], int y[], int length) {
  int *p_x, *p_y;
  int n = 0;

  for (p_x = x, p_y = y; p_x < x + length; p_x++) {
    if (*p_x % 2 == 0) {
      *p_y++ = *p_x;
      n++;
    }
  }

  return n;
}

void print_array(int array[], int length) {
  int *p_a;
  for (p_a = array; p_a < array + length; p_a++) {
    printf("%1d ", *p_a);
  }
  printf("\n");
}
