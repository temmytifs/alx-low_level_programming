#include "main.h"

/**
 * set_bit - sets a bit of a given index to 1
 * @n: pointer to the number to be change
 * @index: index of the bit to set to 1
 *
 * Return: 1 on success, -1 on failure
 */

int set_bit(unsigned long int *y, unsigned int index)
{
	if (index > 63)
		return (-1);

	*y = ((1UL << index) | *y);
	return (1);
}

