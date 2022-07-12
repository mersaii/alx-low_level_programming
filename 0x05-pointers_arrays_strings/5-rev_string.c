#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: input to reverse
 * Return: a string in reverse
 */
void rev_string(char *s)
{
	char rev = s[0];
	int h = 0;
	int i;

	while (s[h] != '\0')
		h++;

	for (i = 0; i < h; i++)
	{
		h--;
		rev = s[i];
		s[i] = s[h];
		s[h] = rev;
	}
}
