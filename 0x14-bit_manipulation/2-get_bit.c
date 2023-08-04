#include "main.h"

/**
 * get_bit - Returns the value of a bit at an index in a decimal number
 * @n: the number to be search
 * @index: index of the bit
 *
 * Return: value of the bit
 */

int get_bit(unsigned long int d, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (d >> index) & 1;

	return (bit_val);
}

