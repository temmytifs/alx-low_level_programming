#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read the text file to print STDOUT.
 * @filename: text file being read
 * @letters: Number of letters to be read
 * Return: w- actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t d;
	ssize_t x;
	ssize_t y;

	d = open(filename, O_RDONLY);
	if (d == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	y = read(d, buf, letters);
	x = write(STDOUT_FILENO, buf, y);

	free(buf);
	close(d);
	return (x);
}

