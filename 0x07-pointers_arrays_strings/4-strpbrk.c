#include <stddef.h>
#include <string.h>
/**
 * _strpbrk - locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: the input string
 * @accept: the string to test with
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is founc
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned short int ind = 0;
	char *l;

	for (; s[ind] != '\0'; ind++)
	{
		l = strchr(accept, s[ind]);
		if (l != NULL)
			return (s + ind);
	}
	return (NULL);
}
