#include <stdio.h>

/**
 * main - prints aphabets
 *
 * Return: 0
*/
int main(void)
{
	char k;

	k = 'a';
	while (k != ('z' + 1))
	{
		putchar(k);
		k++;
	}
	putchar('\n');
	return (0);
}
