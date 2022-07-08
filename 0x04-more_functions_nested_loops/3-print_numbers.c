#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9
 * Return: 0-9 followed by a new line
 */
void print_numbers(void)
{
	int d;

	for (d = 0; d <= 9; d++)
	{
		_putchar(d + '0');
	}
	_putchar('\n');
}
