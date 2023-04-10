#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - function that converts a binary number
 * @b: points to string containing the binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num_ber = 0;
	int j;

	if (!b)
	return (0);

	for (j = 0; b[j]; j++)
	{
	if (b[j] < '0' || b[j] > '1')
	{
	return (0);
	}
	num_ber = 2 * num_ber + (b[j] - '0');
	}
	return (num_ber);
}
