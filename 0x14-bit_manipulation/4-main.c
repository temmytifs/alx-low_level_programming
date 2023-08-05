#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long int y;

	y = 1024;
	clear_bit(&y, 10);
	printf("%lu\n", y);
	y = 0;
	clear_bit(&y, 10);
	printf("%lu\n", y);
	y = 98;
	clear_bit(&y, 1);
	printf("%lu\n", y);
	return (0);
}
