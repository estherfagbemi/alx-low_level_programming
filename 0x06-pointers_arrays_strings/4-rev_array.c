#include "main.h"

/**
 * reverse_array - reverses the content of san array of integers
 * @a: parameter 1
 * @n: parameter 2
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0 ; i < n-- ; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
