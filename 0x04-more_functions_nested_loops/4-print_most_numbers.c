#include "main.h"

/**
 * print_most_numbers - function that prints the numbers, from 0 to 9
 * except 2 and 4
 * return: 0
 */
void print_most_numbers(void)
{
	int d;

	for (d = 0; d <= 9; d++)
	{
		if ((d != 2) && (d != 4))
		       _putchar(d + '0');
	}
	_putchar('\n');
}
