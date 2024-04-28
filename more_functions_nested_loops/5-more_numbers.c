#include "main.h"

/**
 * more_numbers - print numbers 0 - 14
 */

void more_numbers(void)

{
	int row, num;

	for (row = 0; row <= 9; row++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				_putchar((num / 10) + '0');
			}
		_putchar((num % 10) + '0');
		}
	_putchar('\n');
	}
}
	
