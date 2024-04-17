# include <stdio.h>
# include <stdlib.h>
# include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)

{

	int dig, comb;

	for (dig = '0'; dig < '9'; dig++)
	{

	for (comb =dig + 1; comb <= '9'; comb++)
	{
	if (comb != dig)
	{
	putchar(dig);
	putchar(comb);
	if (dig == '8' && comb == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);

}
