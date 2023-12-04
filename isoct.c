#include "main.h"
/**
 * isOctal - checks if a given integer is an octal number
 * @i: the integer to check
 *
 * Return: 1 if the integer is an octal number, 0 otherwise
 */

int isOctal(const int i)
{
	int j = i;

	while (j > 0)
	{
		int digit = j % 10;

		if (digit >= 8)
		{
			return (0); /* Not an octal number */
		}
		j /= 10;

	}
	return (1); /* Octal number */
}

