#include "b.h"

void print_array(int *array, int size)
{
  //  write(1, "array: ", 7);
  int i = 0;
  while (i < size)
    {
      printf("%d, ", array[i]);
      ++i;
    }
  printf("\n");
}
