#include "main.h"

/**
 * print_alphabet_x10 -Make alphabet x10 times
 * Return: void
 */

void print_alphabet_x10(void)

{

	char letter;
	int row = 0;

	while (row < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		row++;
	}

}

