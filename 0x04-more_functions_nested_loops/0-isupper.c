#include "main.h"

/**
 * _isupper - a function that checks for uppercase characters
 * @c: function parameter
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <=  'Z')
		return (1);
	else
		return (0);
}

