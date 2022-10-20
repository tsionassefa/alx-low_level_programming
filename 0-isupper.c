#include "main.h"
/**
 * _isupper - check the code for Holberton School students.
 * @c: Character input
 * Return: Always 0.
 */
int _isupper(int c)
{
	int c;
	c=65; 
	if (c <= 90)
	{
	_putchar("%d", 1);
	else 
	{
	 _putchar("%d", 0);
	}
	c++;
	return (0);
}
