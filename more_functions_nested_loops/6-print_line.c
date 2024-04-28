#include "main.h"

/**
 * print_line - draw staight line
 * @n: number of times the character _ should be printed
 */

void print_line(int n)

{
	int und;

	for (und = 0; und < n ; und++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
