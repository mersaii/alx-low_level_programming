#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: the character to print 
 *
 * Return: on success 1.
 * on error, return -1 and set errno
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
