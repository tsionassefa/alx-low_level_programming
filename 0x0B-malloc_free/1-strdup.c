#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicate a string using malloc
 * @str: string to duplicate
 * Return: Pointer to a the new duped string
 */
 
char *_strdup(char *str)
{
	int i,c;
	char *a;

	if (str == NULL)
		return(NULL)

	for (i = 0; i < str[i]; i++)
	
	a = malloc(i * sizeof(*a)+1);
	if (a == NULL)
		return (NULL);

	for ( c = 0; c < i; c++)
		a[c] = str[c];
	a[c] = '\0';

	return (NULL)
}	
