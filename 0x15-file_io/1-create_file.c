#include "main.h"

/**
 * create_file - Create the  files.
 * @filename: A pointer to the name of the file to be created.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 * else - 1.
 */

int create_file(const char *filename, char *text_content)

{
	int d, x, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(d, text_content, len);

	if (d == -1 || x == -1)
		return (-1);

	close(d);

	return (1);
}


