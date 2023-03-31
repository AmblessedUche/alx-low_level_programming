#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * *argstostr - concatenates all the argument of the program
 * @ac: the number of arguments
 * @av: an array of strings representing the arguments
 * Return: a pointer to a new string containing the concatenated arguments
 * with a new line character after each one
 */
char *argstostr(int ac, char **av)
{
	char *result;
	int i;
	size_t total_length, index;

	if (ac == 0 || av == NULL)
	{
	return (NULL);
	}
	total_length = 0;
	for (i = 0; i < ac; i++)
	{
	total_length += strlen(av[i]) + 1;
	}
	result = malloc((total_length + 1) * sizeof(char));
	if (result == NULL)
	{
	return (NULL);
	}
	index = 0;
	for (i = 0; i < ac; i++)
	{
	strcpy(result + index, av[i]);
	index += strlen(av[i]);
	result[index] = '\n';
	index++;
	}
	return (result);
}
