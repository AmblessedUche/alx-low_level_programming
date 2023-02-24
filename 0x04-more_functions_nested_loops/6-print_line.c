#include "main.h"

/**
 * print_line - prints _ n times
 * @n: number of times to print _
 *
 */
void print_line(int n)
{
	while (n-- && n >= 0)
		_putchar('_');
	_putchar('\n');
}
