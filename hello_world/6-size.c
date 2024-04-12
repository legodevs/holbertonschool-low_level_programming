#include <stdio.h>

/**
 * main - Entry point and print the size of diferent variables
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	long int longIntType;
	long long int longLongIntType;
	float floatType;

	printf("Size of a char: %d byte(s)", sizeof(charType));
	printf("Size of a int: %d byte(s)", sizeof(intType));
	printf("Size of a long int: %d byte(s)", sizeof(longIntType));
	printf("Size of a long long int: %d byte(s)", sizeof(longLongIntType));
	printf("Size of a float: %d byte(s)", sizeof(floatType));
	return (0);
}
