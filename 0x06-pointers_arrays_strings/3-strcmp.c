#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: an integer less than, equal to, or greater than zero if s1 is
 * less than, equal to, or greater than s2 respectively.
*/
int _strcmp(const char *s1, const char *s2)
{
	size_t i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	if (s1[i] == '\0' && s2[i] == '\0')
	{
		return (0);
	}
	else if (s1[i] == '\0')
	{
		return (-s2[i]);
	}
	else
	{
		return (s1[i]);
	}
}
