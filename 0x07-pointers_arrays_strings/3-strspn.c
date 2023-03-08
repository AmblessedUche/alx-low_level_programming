/**
 * _strspn - returns the number of bytes in the initial segment of s
 * which consist only of the bytes from accept
 * @s: the string to check from
 * @accept: the string to check for
 * Return: the number o f bytes in the inital segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int ind = 0, x;
	unsigned int count = 0;

	for (; accept[ind] != '\0'; ind++)
	{
		for (x = 0; s[x] != ' ' && s[x] != '\0'; x++)
		{
			if (s[x] == accept[ind])
				count++;
		}
	}
	return (count);
}
