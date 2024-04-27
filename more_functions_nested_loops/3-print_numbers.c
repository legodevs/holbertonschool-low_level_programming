#include "main.h"

/**
 * print_numbers - print numbers range 0 - 9
 * Return: no return
 */

void print_numbers(void)

{
	int pn;

	for (pn = '0'; pn <= '9'; pn++)
	{
		_putchar(pn);
	}
	_putchar('\n');
}

