#include "main.h"

/**
 * print_last_digit - returns the last digit of a number
 * @n: the number to determine its last digit
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	int rem = n % 10;

	rem = rem > 0 ? rem : -1 * rem;

	_putchar('0' + rem);
	return (rem);
}
