#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: parameter 1 to be swapped with
 * @b: parameter 2 and viceversa
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
