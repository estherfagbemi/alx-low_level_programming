#include "main.h"

/**
 * print_line - print straight line
 * @n: number of times the character would be printed
 * Return: 0
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1 ; i <= n ; i++)
			_putchar('_');
		_putchar('\n');
	}
}
