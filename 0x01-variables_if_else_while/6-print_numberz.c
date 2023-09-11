#include <stdio.h>
/**
 * main - starting point for execution
 *
 * Return: end execution of a function
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
