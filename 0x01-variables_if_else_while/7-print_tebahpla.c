#include <stdio.h>

/**
 * main - prints aphabets
 *
 * Return: 0
*/
int main(void)
{
	char k;

	k = 'z';
	while (k != ('a' - 1))
	{
		putchar(k);
		k--;
	}
	putchar('\n');
	return (0);
}
