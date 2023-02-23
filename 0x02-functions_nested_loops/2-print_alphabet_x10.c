#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - this function prints all alphabets in lowercase
 *
 */
void print_alphabet_x10(void)
{
	char alpha;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (alpha = 'a'; alpha != 'z' + 1; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
