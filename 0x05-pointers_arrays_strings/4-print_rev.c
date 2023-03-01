#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @str: string to print
 */
void print_rev(char *str)
{
	int x = strlen(str) - 1;

	while (x >= 0)
	{
		_putchar(str[x]);
		x--;
	}
	_putchar('\n');
}
