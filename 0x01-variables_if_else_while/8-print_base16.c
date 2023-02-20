#include <stdio.h>
/**
 * main - the main one
 *
 * Return: 1
*/
int main(void)
{
	int x;
	char y;

	x = 0;
	while (x < 10)
	{
		putchar(x + '0');
		x++;
	}
	y = 'a';
	while (y != 'f' + 1)
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
