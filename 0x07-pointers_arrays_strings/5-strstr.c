#include <string.h>
#include <stddef.h>
/**
 * _strstr - finds the first occurrence of the substring needle
 * in the string haystack.
 * @haystack: the parent string
 * @needle: the string to check
 * Return: a pointer ot the first  index of the substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *ptr;

	ptr = haystack;

	while (*ptr)
	{
		if (strncmp(ptr, needle, strlen(needle)) == 0)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
