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

	printf("Size of a char: %d byte(s)\n", sizeof(charType));
	printf("Size of an int: %d byte(s)\n", sizeof(intType));
	printf("Size of a long int: %d byte(s)\n", sizeof(longIntType));
	printf("Size of a long long int: %d byte(s)\n", sizeof(longLongIntType));
	printf("Size of a float: %d byte(s)\n", sizeof(floatType));
	return (0);
}
