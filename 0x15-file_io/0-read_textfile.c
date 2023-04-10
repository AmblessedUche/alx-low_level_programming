#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads text file and print to Posix output
 * @filename: points to the filename
 * @letters: number of letters function should read
 * Return: actual number and 0 if it cannot be read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t doc, x, y;
	char *txt;

	doc = open(filename, O_RDONLY);

	if (doc == -1)
	{
	return (0);
	}

	txt = malloc(sizeof(char) * letters);
	y = read(doc, txt, letters);
	x = write(STDOUT_FILENO, txt, y);

	free(txt);
	close(doc);
	return (x);
}
