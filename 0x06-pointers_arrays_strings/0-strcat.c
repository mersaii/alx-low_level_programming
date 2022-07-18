#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * null byte at the end of the string
 * @dest: A pointer
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, dest_len = 0;

	while (dest[i+])
		dest_len++;

	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
