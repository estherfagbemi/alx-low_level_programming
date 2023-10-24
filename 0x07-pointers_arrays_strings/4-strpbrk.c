#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: input 1
 * @accept: input 2
 * Return: Always 0
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0 ; accept[r] ; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
