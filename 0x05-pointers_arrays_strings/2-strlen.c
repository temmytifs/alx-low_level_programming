#include <stdio.h>

/**
 * _strlen - Retruns the length of a string.
 * @str: The string to get the length of 
 * Retrun: The length of @str.
 */
size_t _strlen(const char *str)

{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);

}
