#include "main.h"
#include <string.h>
/**
 * _strlen - check the code for length.
 * @s: Inputted string pointer
 * Return: Always 0.
 */
int _strlen(char *s)
{
	s[5] = "tsion";
	_putchar(" a = %zu \n ", strlen(s));
	return (0);
}
