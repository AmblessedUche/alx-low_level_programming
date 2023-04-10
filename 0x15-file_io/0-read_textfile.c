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
	ssize_t file, w, t;
	char *txt;

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
	return (0);
	}

	txt = malloc(sizeof(char) * letters);
	t = read(file, txt, letters);
	w = write(STDOUT_FILENO, txt, t);

	free(txt);
	close(file);
	return (w);
}
