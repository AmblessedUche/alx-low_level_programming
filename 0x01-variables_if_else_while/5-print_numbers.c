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
		printf("%d", x);
		x++;
	}
	putchar('\n');
	return (0);
}
