#include <stdio.h>
/**
 * main - starting point for execution
 *
 * Return: end execution of a function
 */
int main(void)
{
	int o = '0';

	for (o = '0' ; o <= '9' ; o++)
	{
		int t = '0';

		for (t = '0' ; t <= '9' ; t++)
		{
			if (!((o == t) || (t > o)))
			{
				putchar(t);
				putchar(o);
				if (!(o == '9' && t == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
