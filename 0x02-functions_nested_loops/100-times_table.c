#include "main.h"
/**
  * print_times_table - Prints a multiplication table up to param
  * @n: The number to be treated
  * Return: Number matrix
  */
void print_times_table(int n)
{
int i = n;
int x;
int y;

if (n >= 0 && n <= 14)
for (x = '0'; x <= i; x++)
{
char pr = '0';
_putchar(pr);
for (y = '0'; y < i; y++)
{
pr = pr + x;
_putchar(pr);
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
}
