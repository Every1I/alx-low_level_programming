#include "main.h"
/**
 *_abs - Computes the absolute value of an integer.
 *
 *
 *@s: parameter to be computed
 *Return: -s, s or 0
 */
int _abs(int s)
{
	if (s < 0)
		return (-s);
	else if (s >= 0)
		return (s);
	else
		return (0);
}
