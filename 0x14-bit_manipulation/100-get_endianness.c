#include "main.h"

/**
 * get_endianness - Checks if a machine is small or big endian
 * Return: 0 on big machine, 1 on small 
 */

int get_endianness(void)
{
	unsigned int z = 1;
	char *c = (char *) &z;

	return (*c);
}

