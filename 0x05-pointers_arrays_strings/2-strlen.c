#include "main.h"
/**
 * _strlen - identifies lenght of a string
 * @s: parameter to be counted
 * Return: lenght of a string
 */
int _strlen(char *s)
{
	int c;
	int count = 0;

	for (c = 0; s[c] != '\0' ; c++)
		count++;
	return (count);
}
