#include "main.h"

/**
 * _abs - Computes the absolute value of an interger.
 * @c: The numbers to be computed.
 * Return: Absolute value of number of zero
 */

int _abs(int c)

{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
