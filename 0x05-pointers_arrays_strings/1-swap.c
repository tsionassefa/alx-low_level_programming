#include "main.h"
/**
 * swap_int - check the code for swap.
 * @a: First variable to be swapped
 * @b: Second variable to be swapped
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int me;

	me = *a;
	*a = *b;
	*b = me;
}
