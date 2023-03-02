#include <string.h>

/**
 * _strncpy - copies a string, up to n bytes
 * @dest: the destination string
 * @src: the string to be copied to the dest
 * @n: the maximum number of bytes to be copied
 * Return: a pointer to the resulting string dest
*/
char *_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
