#include "main.h"

/**
 * isHexadecimal - Checks if a number is in hexadecimal representation.
 * @i: The integer to check.
 * Return: 1 if the number is hexadecimal, 0 otherwise.
 */

int isHexadecimal(const int i)
{
	int j = i;

	while (j > 0)
	{
		int digit = i % 16;

		if (digit >= 10 && digit <= 15)
		{
			return (0); /* Not a hexadecimal number */
		}
		j /= 16;

	}
	return (1); /* Hexadecimal number */
}

