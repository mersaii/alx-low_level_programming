#include "main.h"

/**
 * _strncat - Concatenates two strings
 * 
 * @dest: The string to be appended
 * @src: The string to be appended
 * @n: The number of bytes from src to be appended
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
