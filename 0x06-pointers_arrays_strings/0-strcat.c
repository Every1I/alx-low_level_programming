#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: src appends to
 * @src:the source string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int destlength = 0;
	int srclength = 0;
	int index;

	for (index = 0 ; dest[index] != '\0' ; index++)
		destlength++;
	for (index = 0 ; src[index] != '\0' ; index++)
		srclength++;
	for (index = 0 ; index <= srclength ; index++)
		dest[destlength + index] = src[index];
	return (dest);
}
