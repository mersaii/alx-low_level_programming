#include <unistd.h>

/**
 * _putchar - writes the charcter c to stdout
 * @c: the charcter to be printed
 * Return: 1 on success,  otherwise 0.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
