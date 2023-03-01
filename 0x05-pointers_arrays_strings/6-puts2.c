#include <string.h>
#include "main.h"

/**
 * puts2 - prints every other character from first
 * @str: the string
 */
void puts2(char *str)
{
	int k = 0, len = strlen(str);

	while (k < len)
	{
		_putchar(str[k]);
		k += 2;
	}
	_putchar('\n');
}
