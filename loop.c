#include "b.h"

int count_brackets(char *str)
{
  int i = 0;
  int c = 0;
  while (str[i])
    {
      if (str[i] == '[')
	++c;
      ++i;
    }
  return c;
}

void pair_brackets(char *str, int *open, int *close, int c)
{
  int i = 0;
  int j = 0;
  c = c - 1;
  while (str[i])
    {
      if (str[i] == '[')
	{
	  open[j] = i;
	  ++j;
	}
      if (str[i] == ']')
	{
	  close[c] = i;
	  c--;
	}
      ++i;
    }
}
int matching_close(int i, int *open, int *close, int c)
{
  int j = 0;
  while (j < c)
    {
      if (i == open[j])
	return (close[j]);
      ++j;
    }
  return -1;
}

int matching_open(int i, int *open, int *close, int c)
{
  int j = 0;
  while (j < c)
    {
      if (i == close[j])
	return open[j];
      ++j;
    }
  return -1;
}

int do_while(char *str, int i, int *array, int j, int *open, int *close, int c)
{
  int k;
  if (str[i] == '[' && array[j] == 0)
    {
      i = matching_close(i, open, close, c);
      return ++i;
    }
  if (str[i] == '[' && array[j] != 0)
    {
      k = matching_close(i, open, close, c);
      ++i;
      while (array[j])
	{
	  while (i < k)
	    {
	      if (normal_operations(str[i]))
		{
		  if (str[i] == '+' || str[i] == '-')
		      modify(str[i], array, j);
		  if (str[i] == '<' || str[i] == '>')
		      j = move (str[i], j);
		  if (str[i] == '.')
		      ft_putchar(array[j]);
		  ++i;
		}
	      else
		i = do_while(str, i, array, j, open, close, c);
	    }
	  if (str[i] == ']' && array[j] != 0)
	    {
	      i = matching_open(i, open, close, c);
	      i = do_while(str, i, array, j, open, close, c);
	    }
	  else
	    return ++i;
	}
    }
  return i;
}
