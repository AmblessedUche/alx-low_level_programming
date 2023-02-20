#include <stdio.h>

/**
 * main - prints aphabets
 *
 * Return: 0
*/
int main(void)
{
	char k;
	char k2;

	k = 'a';
	k2 = 'A';
	while (k != ('z' + 1))
	{
		putchar(k);
		k++;
	}
	while (k2 != ('Z' + 1))
	{
		putchar(k2);
		k2++;
	}
	putchar('\n');
	return (0);
}
