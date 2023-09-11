#include <stdio.h>
/**
 * main - starting point for execution
 *
 * Return: end execution of a function
 */
int main(void)
{
	char a;

	for (a = 'z' ; a >= 'a' ; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
