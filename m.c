#include "b.h"

void print_output(char *str)
{
  int array[2048];
  int c = count_brackets(str);
  int open[c];
  int close[c];
  pair_brackets(str, open, close, c);
  int i = 0;
  int j = 0;
  while (str[i])
    {
      if (normal_operations(str[i]))
	{
	  if (str[i] == '+' || str[i] == '-')
	    modify(str[i], array, j);
	  if (str[i] == '<' || str[i] == '>')
	    j = move(str[i], j);
	  if (str[i] == '.')
	    ft_putchar(array[j]);
	  ++i;
	}
      else
	i = do_while(str, i, array, j, open, close, c);
    }
}

int main(int ac, char **av)
{
  if (ac != 2)
    {
      ft_putchar('\n');
      return 0;
    }
  print_output(av[1]);
  return 0;
}
