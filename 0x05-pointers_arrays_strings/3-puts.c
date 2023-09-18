#include "main.h"
/**
 * _puts -  prints a string.
 * @str: the string to be printed
 * Return: void
 */
void _puts(char *str)
{
	int c;

	for (c = 0 ; str[c] != '\0' ; c++)
		_putchar(str[c]);
	_putchar('\n');
}
