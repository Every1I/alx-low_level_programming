#include "main.h"
/**
 * leet - function that encodes a string
 * @e: string to be encoded
 * Return: e encoded string
 */
char *leet(char *e)
{
	int i, r;
	char *a = "aAeEoOtTlL";
	char *n = "4433007711";

	for (i = 0 ; e[i] != '\0' ; i++)
	{
		for (r = 0 ; r <= 9 ; r++)
		{
			if (e[i] == a[r])
				e[i] = n[r];
		}
	}
	return (e);
}
