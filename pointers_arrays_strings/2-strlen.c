#include <stdio.h>

/**
 * _strlen - returns the lengs of a string
 * @s: pointer of tipe char that points to a string
 * Return: number of the bytes of a string
 */

int _strlen(char *s)

{
	int len = 0;

	while (s[len] != '\0')
	{
	len++;
	}
	return len;
}


