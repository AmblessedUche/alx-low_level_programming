/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: the string to be modified
 * Return: a pointer to the modified string
*/
char *string_toupper(char *str)
{
	char *p;

	for (p = str; *p != '\0'; p++)
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p = *p - 'a' + 'A';
		}
	}
	return (str);
}
