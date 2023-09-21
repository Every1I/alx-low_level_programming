#include "main.h"
/**
 * _strncat -  function that concatenates two strings
 * @dest: where src will append
 * @src: source string
 * @n:number of bytes from src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = strlen(dest);
	int index;

	for (index = 0 ; index < n && *src != '\0' ; index++)
	{
		dest[length + index] = *src;
		src++;
	}
	dest[length + index] = '\0';
	return (dest);
}
