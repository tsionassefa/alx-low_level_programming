#include "main.h"
/**
 * _puts - check the code to print the string.
 * @str: String to be printed out.
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
        }
	_putchar('\n');
}
