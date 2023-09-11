#include <stdio.h>
/**
 * main - starting point for execution
 *
 * Return: end execution of function
 */
int main(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
		if (a != 'q' && a != 'e')
			putchar(a);
	putchar('\n');
	return (0);
}
