#include "main.h"

/**
 * print_most_numbers - prints 0-9 skipping 2 and 4
 *
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num != 2 && num != 4)
			_putchar('0' + num);

	}
	_putchar('\n');
}
