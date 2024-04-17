#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -Entry point
 * Return: Always 0 (Success)
 */

int main(void)

{
	int dig, comb, com2;

	for (dig = '0'; dig < '9'; dig++)
	{
	
	for (comb = dig + 1; comb <= '9'; comb++)
	{
	
	for (com2 = comb + 1; com2 <= '9'; com2++)
	{
	
	if ((comb != dig) != com2)
	{
	
	putchar(dig);
	putchar(comb);
	putchar(com2);
	if (dig == '7' && comb == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);

}
