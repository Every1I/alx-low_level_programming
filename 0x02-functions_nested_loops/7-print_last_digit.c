#include "main.h"
/**
 *print_last_digit - prints the last digit of a number.
 *
 *@i: parameter to be checked
 *Return: r when succesful
 */
int print_last_digit(int i)
{
	int r;

	r = i % 10;
	if (i < 0)
		r = -r;
	_putchar(r + '0');
	return (r);
}
