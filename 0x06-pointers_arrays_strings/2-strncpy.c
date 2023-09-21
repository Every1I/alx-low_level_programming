#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: destination string for src
 * @src: source string
 * @n:number of bytes from src
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0 ; index < n && src[index] != '\0' ; index++)
		dest[index] = src[index];
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}
