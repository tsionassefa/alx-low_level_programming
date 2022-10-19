#include "main.h"
/**
 * entry-program entry
 * Description-display time table
 * main-return 0 always
 */
void print_times_table(int n)
{
char i = n;
char x;
char y;
for (x = '0'; x <= i; x++)
{
char pr = '0';
_putchar(pr);
for (y = '0'; y < i; y++)
{
pr = pr + x;
}
_putchar('\n');
}
print_times_table(3);
print_times_table(5);
print_times_table(98);
print_times_table(12);
}
