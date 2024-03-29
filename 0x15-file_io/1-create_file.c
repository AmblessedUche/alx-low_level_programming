#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - a function that creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to the string to write to the file.
 * Return: 1 on success, -1 on failure(if write fails, Null etc)
 */

int create_file(const char *filename, char *text_content)
{
	int x, y, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	y = write(x, text_content, len);

	if (x == -1 || y == -1)
		return (-1);

	close(x);

	return (1);
}
