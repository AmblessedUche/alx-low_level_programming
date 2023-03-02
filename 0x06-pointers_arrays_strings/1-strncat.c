#include <string.h>

/**
 * _strncat - concatenates two strings, using at most n bytes from src
 * @dest: the destination string
 * @src: the string to be added to the dest
 * @n: the maximum number of bytes to be used from src
 * Return: a pointer to the resulting string dest
*/
char *_strncat(char *dest, const char *src, size_t n)
{
	char *ptr = dest;

	size_t dest_len = strlen(dest);
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		ptr[dest_len + i] = src[i];
	}
	ptr[dest_len + i] = '\0';
	return (dest);
}
