#include "main.h"
/**
 * cap_string - capitalizes a string
 * @str: string to capitalize
 * Return: capitalized strings
*/
char *cap_string(char *str)
{
	int cap = 1;
	int x = 0;

	while (str[x] != '\0')
	{
		if (cap && str[x] >= 'a' && str[x] <= 'z')
			str[x] -= 32;
		cap = is_special(str[x]);
		x++;
	}
	return (str);
}

/**
 * is_special - checks if its a special character
 * @c: the character
 * Return: 1 if special else 0
*/
int is_special(char c)
{
	char cs[13] = "\n\t,;.!?\"(){} ";
	int x = 0;

	while (x < 13)
	{
		if (cs[x] == c)
			return (1);
		x++;
	}
	return (0);
}
