#include <string.h>
/**
 * rev_string - reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int x = strlen(s) - 1, y = 0;
	char t;

	for (; x > y; x--, y++)
	{
		t = s[x];
		s[x] = s[y];
		s[y] = t;
	}
}
