#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @c: parameter to be changed
 * Return: c
 */
char *string_toupper(char *c)
{
	int index;

	for (index = 0 ; c[index] != '\0' ; index++)
	{
		if (c[index] >= 'a' && c[index] <= 'z')
			c[index] = c[index] - 32;
	}
	return (c);
}
