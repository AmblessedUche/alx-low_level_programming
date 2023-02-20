#include <stdio.h>
/**
 * main - the main function
 *
 * Return: 0
*/
int main(void)
{
	int first;
	int second;

	first = 0;
	for (; first < 9; first++)
	{
		for (second = first + 1; second < 10; second++)
		{
			putchar(first + '0');
			putchar(second + '0');
			if (first != 8 || second != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
