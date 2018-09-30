#include "b.h"


int main()
{
  ft_putchar('t');
  ft_putchar('\n');
  
  int array[3] = {1,2,3};
  write(1, "original array: ", 16);
  print_array(array, 3);

  write(1, "+ 0: ", 5);
  increase(array, 0);
  print_array(array, 3);

  write(1, "- 1: ", 5);
  decrease(array, 1);
  print_array(array, 3);

  write(1, "modify + 2: ", 12);
  modify('+', array, 2);
  print_array(array, 3);

  printf("j: %d\n> j: %d\n", 2, move('>',2));

  print_ascii(78);
  ft_putchar('\n');
  
  printf("normal op: %d\n", normal_operations('+'));


  int i = 0;
  i = do_normal_operations("+",i,array,1);
  printf("do norm op: i: %d\n", i);
  write(1, "array: ", 7);
  print_array(array,3);

  return 0;
}
  
