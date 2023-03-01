#include "main.h"

/**
 * _puts - mimics stdout puts
 * @str: the string to be printed
 */
void _puts(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
