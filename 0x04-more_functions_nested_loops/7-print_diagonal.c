#include "main.h"

/**
 * print_diagonal - prints \ n times
 * @n: number of times
 *
 */
void print_diagonal(int n)
{
	int c, d;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (c = 0; c < n; c++)
	{
		for (d = 0; d < c; d++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
