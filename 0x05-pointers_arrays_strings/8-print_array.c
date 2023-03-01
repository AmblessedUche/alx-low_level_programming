#include <stdio.h>

/**
 * print_array - prints the n elements of the array
 * @a: the array
 * @n: the numbers to be printed
 */
void print_array(int *a, int n)
{
	int x = 0;

	for (; x < n; x++)
	{
		if (x != n - 1)
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	}
	printf("\n");
}
