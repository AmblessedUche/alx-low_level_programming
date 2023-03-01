/**
 * _strlen - calculates the length of a string
 * @s: the string to calculate the length
 *
 * Return: returns the length of s
 */
int _strlen(char *s)
{
	int k = 0;

	while (s[k] != '\0')
		k++;

	return (k);
}
