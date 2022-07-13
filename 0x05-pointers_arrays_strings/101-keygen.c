#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char passw[84];
	int index = 0, sum = 0, part1, part2;

	srand(time(0));
	
	while (sum < 2772)
	{
		passw[index] = 33 + rand() % 94;
		sum += passw[index++];
	}

	password[index] = '\0';

	if (sum != 2772)
	{
		part1 = (sum - 2772) / 2;
		part2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			part1++;

		for (index = 0; passw[index]; index++)
		{
			if (passw[index] >= (33 + part1))
			{
				passw[index] -= part1;
				break;
			}
		}
		for (index = 0; passw[index]; index++)
		{
			if (passw[index] >= (33 + part2))
			{
				passw[index] -= part2;
				break;
			}
		}
	}

	printf("%s", passw);
	return (0);
}
