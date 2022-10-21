#include "main.h"

/**
  * print_most_numbers - that display except 2 and 4.
  * Return: no return
  */
void print_most_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
	if (num == '2' || num == '4')
		continue;
	else
		_putchar(num);
	}
	_putchar('\n');
}
