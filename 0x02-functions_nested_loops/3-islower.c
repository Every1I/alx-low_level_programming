#include "main.h"
/**
 * _islower - function that checks for lowercase char
 *@c: variable to be checked
 *
 * Return: 0 or 1 when successful
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
