#include <stdio.h>
/**
 * main - the main one
 *
 * Return: 1
*/
int main(void)
{
	int x;

	x = 0;
	while (x < 10)
	{
		putchar(x + '0');
		x++;
	}
	putchar('\n');
	return (0);
}
