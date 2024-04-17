#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)

{

	int dig, comb;

	for (dig = 0; dig <= 98; dig++)
	{

	for (comb = dig + 1; comb <= 99; comb++)
	{
	putchar((dig / 10) + '0');
	putchar((dig % 10) + '0');
	putchar(' ');
	putchar((comb / 10) + '0');
	putchar((comb % 10) + '0');
	if (dig == 98 && comb == 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);

}
