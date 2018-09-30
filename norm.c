#include "b.h"

void ft_putchar(char c)
{
  write(1,&c,1);
}

void increase(int *array, int j)
{
  ++array[j];
}

void decrease(int *array, int j)
{
  --array[j];
}

void modify(char c, int *array, int j)
{
  if (c == '+')
    increase(array, j);
  else
    decrease(array, j);
}

int move(char c, int j)
{
  if (c == '<')
    return --j;
  return ++j;
}

int normal_operations(char c)
{
  if (c != '[' && c != ']')
    return 1;
  return 0;
}

void print_ascii(int n)
{
  if (n >= 32 && n <= 176)
    ft_putchar(n);
  else
    ft_putchar('.');
}
