#include "main.h"

/**
 * print _sign - Prints the sign of a number
 * @n: the number to get desing
 * Return: 1 for positive num, -1 for negative num or zero for anything else
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
