#ifndef B_H
# define B_H

#include <unistd.h>
#include <stdio.h>
void print_array(int *array, int size);

void ft_putchar(char c);
void increase(int *array, int j);
void decrease(int *array, int j);
void modify(char c, int *array, int j);
int move(char c, int j);
int normal_operations(char c);
void print_ascii(int n);

int count_brackets(char *str);
void pair_brackets(char *str, int *open, int *close, int c);
int matching_close(int i, int *open, int *close, int c);
int matching_open(int i, int *open, int *close, int c);
int do_while(char *str, int i, int *array, int j, int *open, int *close, int c);

void print_output(char *str);



#endif
