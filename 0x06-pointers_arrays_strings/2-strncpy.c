#include "main.h"

/**
 * _strncpy - Copy a string
 * @dest: The destination value
 * @src: The source value
 * @n: The copy limit
 * Return: char value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int m = 0, t =0;

	while(src[t])
	{
		t++;
	}

	while(m < n && src[m])
	{
		dest[m] = src[t];
		m++;
	}
	while( m < n)
	{
		dest[m] = '\0';
		m++;
	}

	return (dest);
}
