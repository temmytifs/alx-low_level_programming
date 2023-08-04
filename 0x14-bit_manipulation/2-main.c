#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
    int y;

    y = get_bit(1024, 10);
    printf("%d\n",y);
    y = get_bit(98, 1);
    printf("%d\n", y);
    y = get_bit(1024, 0);
    printf("%d\n", y);
    return (0);
}
