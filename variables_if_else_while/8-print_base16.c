#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)

{

	int dig;
	char low;

	for (dig = '0'; dig <= '9'; dig++)
	putchar(dig);

	for (low = 'a'; low <= 'f'; low++)
	putchar(low);
	putchar('\n');

	return (0);

}
