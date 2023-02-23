#include "main.h"

/**
 * _isalpha - a function that checks whether a character is an aphabet
 * @c: the character to be checked
 *
 * Return: 1 if its alphabet and 0 if otherwise
 */
int _isalpha(int c)
{
	return (c >= 'A' && c <= 'z' ? 1 : 0);
}
