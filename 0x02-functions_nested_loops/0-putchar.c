#include <stdio.h>
#include "main.h"
/**
 * main - the main function
 *
 * Return: 0
 */
int main(void)
{
	char k[] = "_putchar";
	int index;

	for (index = 0; index < 8; index++)
	{
		putchar(k[index]);
	}
	putchar('\n');
	return (0);
}
