#include "main.h"
/**
 * _puts - check the code to print the string.
 * @str: String to be printed out.
 * Return: Always 0.
 */
void _puts(char *str)
{
	int f;

	for (f = 0; str[f] != '\0'; f++)
		_putchar(str[f]);

	_putchar('\n');
}
