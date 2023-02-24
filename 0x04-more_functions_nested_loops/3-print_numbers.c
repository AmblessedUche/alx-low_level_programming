#include "main.h"

/**
 * print_numbers - prints 0 - 9
 *
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
		_putchar('0' + num);

	_putchar('\n');
}
