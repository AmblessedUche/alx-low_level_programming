/**
 * _strcpy - copies a string
 * @dest: destination string
 * @src: source string
 *
 * Return: The copied string
 */
char *_strcpy(char *dest, char *src)
{
	int k = 0;

	while (src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	dest[k] = '\0';

	return (dest);
}
