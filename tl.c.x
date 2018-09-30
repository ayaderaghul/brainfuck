#include "b.h"

int main()
{
  char *str = "0++[>+[>0-<-]<-]";
  int array[5] = {2,0,0,0,0};
  int c = 0;
  c = count_brackets(str);
  printf("str: %s, brackets: %d\n", str, c);

  int open[c];
  int close[c];

  printf("original open array: ");
  print_array(open,c);
  printf("original close array: ");
  print_array(close,c);
  
  pair_brackets(str, open, close, c);
  printf("open: ");
  print_array(open,c);
  printf("close: ");
  print_array(close, c);

  printf("open: 3, matching close: %d\n", matching_close(3,open,close,c));
  printf("close: 12, matching open: %d\n", matching_open(12,open,close,c));

  int i = 3;
  int j = 0;
  printf("before: i %d, j %d, array: ", i, j);
  print_array(array,5);
  i = do_while(str, i, array, j, open, close, c);
  printf("after: i: %d, j: %d, array: ", i, j);
  print_array(array,5);

  /*
  printf("\n----\nTEST 2:\n");
  
  char *str2 = "+++++[>++++[>++++H>+++++i<<-]>>>++\n<<<<-]>>--------.>+++++.>.";
  int array2[5]={5,0,0,0,0};
  int c2 = 0;
  c2 = count_brackets(str2);
  int open2[c2];
  int close2[c2];
  pair_brackets(str2, open2, close2, c2);
  i = 5;
  j = 0;
  printf("before: i %d, j %d, array: ", i, j);
  print_array(array2,5);
  i = do_while(str2,i, array2,j,open2,close2,c2);
  printf("after: i %d, j %d, array ", i, j);
  print_array(array2,5);
  */

  return 0;
}

  
