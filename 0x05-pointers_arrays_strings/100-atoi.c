#include <string.h>
/**
 * _atoi - converts string to integer
 * @s: string to convert
 *
 * Return: the integer
 */
int _atoi(char *s)
{
	unsigned int num = 0;
	int x = 0, sign = 1;

	while (s[x] != '\0')
	{
		if (s[x] == '-' && num == 0)
			sign *= -1;

		if ((s[x] < '0' || s[x] > '9') && num != 0)
			break;

		if (s[x] >= '0' && s[x] <= '9')
		{
			num *= 10;
			num += s[x] - '0';
		}
		x++;
	}
	num *= sign;
	return (num);
}
