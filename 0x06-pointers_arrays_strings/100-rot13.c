#include "main.h"
/**
 * rot13 - function that encodes a string
 * @e: string to be encoded
 * Return: e encoded string
 */
char *rot13(char *e)
{
	int i, r;
	char *a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *z = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0 ; e[i] != '\0' ; i++)
	{
		for (r = 0 ; a[r] != '\0' ; r++)
		{
			if (e[i] == a[r])
			{
				e[i] = z[r];
				break;
			}
		}
	}
	return (e);
}
