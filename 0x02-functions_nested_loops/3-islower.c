#include "main.h"

/**
 * _islower - determines whether a character is lowercase
 * @c: the character to be tested
 *
 * Return: 1 if it is lowercase and 0 if otherwise
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z' ? 1 : 0);
}
