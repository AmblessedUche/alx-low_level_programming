#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: point to file created
 * @text_content: string to write file
 * Return: 1 success -1 failure
 */

int create_file(const char *filename, char *text_content)
{
	int x = 0, y,  txt;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
	for (txt = 0; text_content[txt];)
	txt++;
	}

	x = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	y = write(x, text_content, txt);
	if (x == -1)
	return (-1);
	if (y == -1)
	return (-1);
	close(x);
	return (1);
}
