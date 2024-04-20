#include "main.h"

/**
 * _isalpha - Check for alphabetic character
 * @c: The character is checked
 * Return: 1 for alphabetic character or 0 for other
 */

int _isalpha(int c)

{

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
