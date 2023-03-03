#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * leet - a function that encodes a string into 1337.
 * @str: string concatenation.
 * Return: the result.
*/
char *leet(char *str)
{
	const char *mapping[] = {"4", "3", "0", "7", "1"};
	const char *chars[] = {"aA", "eE", "oO", "tT", "lL"};
	char *result = malloc(strlen(str) + 1);
	int index;

	for (int i = 0; str[i] != '\0'; i++)
	{
		index = -1;

		for (int j = 0; j < 5; j++)
		{
			if (str[i] == chars[j][0] || str[i] == chars[j][1])
			{
				index = j;
				break;
			}
		}
		if (index >= 0)
		{
			strcat(result, mapping[index]);
		}
		else
		{
			char temp[2] = {str[i], '\0'};

			strcat(result, temp);
		}
	}
	return (result);
}
