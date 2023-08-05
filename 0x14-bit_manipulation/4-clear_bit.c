#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @y: pointer to the number to be change
 * @index: index  bit to clear
 *
 * Return: 1 for success, -1 for failure
 */

int clear_bit(unsigned long int *y, unsigned int index)
{
	if (index > 63)
		return (-1);

	*y = (~(1UL << index) & *y);
	return (1);
}

