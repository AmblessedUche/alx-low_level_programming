#include <string.h>
#include "main.h"

/**
 * puts_half - prints the half of the string
 * @str: the string itself
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int n = len % 2 == 0 ? len / 2 : (len / 2) + 1;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
