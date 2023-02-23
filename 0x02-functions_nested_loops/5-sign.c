#include "main.h"

/**
 * print_sign - this function determines whether a number is
 * or 0, positive or negative
 * @n: the number to be checked;
 *
 * Return: + if positive, - if negative and 0 if 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
