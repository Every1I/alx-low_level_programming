#include "main.h"
/**
 * _strcmp - function that compares two strings.
 * @s1: parameter 1 for comparison
 * @s2:parameter 2 for comparison
 * Return: always 0
 */
int _strcmp(char *s1, char *s2)
{
	int index;

	for (index = 0 ; s1[index] != '\0' || s2[index] != '\0' ; index++)
	{
		if (s1[index] != s2[index])
		{
			if (s1[index] < s2[index])
				return (s1[index] - s2[index]);
			else if (s1[index] > s2[index])
				return (s1[index] - s2[index]);
		}
	}
	return (0);
}
