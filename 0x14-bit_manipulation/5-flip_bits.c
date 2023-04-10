#include <stdio.h>
#include "main.h"

/**
 * flip_bits - function return number to bit flip from one to another
 * @n: number to flipped
 * @m: number to flip to
 * Return: flip from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	unsigned long int y = 0;

	x = n ^ m;

	while (x != 0)
	{
	y += x & 1;
	x = x >> 1;
	}
	return (y);
}

