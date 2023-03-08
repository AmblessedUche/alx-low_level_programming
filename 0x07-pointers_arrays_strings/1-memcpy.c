/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: the destination pointer
 * @src: the reference pointer
 * @n: the number of bytes
 * Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k = 0;

	for (; k < n; k++)
	{
		*(dest + k) = src[k];
	}
	return (dest);
}
