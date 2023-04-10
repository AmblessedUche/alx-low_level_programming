#include <stdio.h>
#include "main.h"

/**
 * set_bit - function that sets the value of a bit
 * @n: points to bit
 * @index: starts from 0
 * Return: 1 success and -1 error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int x;
	int y;

	if (index > 64)
	{
	return (-1);
	}
	for (y = 0; y < 64; y++)
	{
	x = 1 << index;
	*n = *n | x;
	}
	return (1);
}
