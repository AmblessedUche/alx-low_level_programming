#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: point to file created
 * @text_content: string to write file
 * Return: 1 success -1 failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int x, y, txt = 0;

	if (filename == NULL)
	{
	return (-1);
	}
	if (text_content != NULL)
	{
	for (txt = 0; text_content[txt];)
	txt++;
	}
	x = open(filename, O_WRONLY | O_APPEND);
	y = write(x, text_content, txt);
	if (x == -1)
	return (-1);
	if (y == -1)
	return (-1);
	close(x);
	return (1);
}
