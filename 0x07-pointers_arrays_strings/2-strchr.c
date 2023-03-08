#include <stddef.h>
/**
 * _strchr - returns the first occurence of the character c in the string s,
 * or NULL if the character is not found
 * @s: string to check occurence
 * @c: the character to check
 * Return: first occurence of the character c in string s
 */
char *_strchr(char *s, char c)
{
	int k = 0;

	for (; s[k] != '\0'; k++)
	{
		if (s[k] == c)
			return (s + k);
	}
	return (s + k);
}
