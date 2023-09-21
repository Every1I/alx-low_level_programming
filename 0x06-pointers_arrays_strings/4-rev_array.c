#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: name of array
 * @n: number of array elements
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int index;
	int r;

	for (index = 0 ; index < n / 2 ; index++)
	{
		r = a[index];
		a[index] = a[n - 1 - index];
		a[n - 1 - index] = r;
	}
}
