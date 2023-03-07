#include <stdio.h>
#include "main.h"

/**
 * _memset - Write a function that fills memory with a constant byte.
 * @s: specifies the starting address of the memory area.
 * @b: specifies the byte value that should be used to fill the memory area.
 * @n: specifies the number of bytes.
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
	{
		*p++ = b;
	}
	return (s);
}
