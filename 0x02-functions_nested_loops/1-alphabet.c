#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - this function is to print all alphabets in lowercase
 *
*/
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha != 'z' + 1; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
