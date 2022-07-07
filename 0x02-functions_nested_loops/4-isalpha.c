#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character.
 * @c: the function argument
 * Return: 1 if c is a letter, 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
