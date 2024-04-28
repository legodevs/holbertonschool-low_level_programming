#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: number of times the character _ should be printed
 */

void print_diagonal(int n)

{
	int und, spa;

	for (und = 0; und < n ; und++)
	{
		if (n > 0)
		{
			for (spa = 0; spa < und; spa++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
