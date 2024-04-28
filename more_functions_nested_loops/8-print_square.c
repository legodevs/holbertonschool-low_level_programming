#include "main.h"

/**
 * print_square - print a square
 * @size: is the size of the square
 */

void print_square(int size)

{

	int row, cha;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (cha = 0; cha < size; cha++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
