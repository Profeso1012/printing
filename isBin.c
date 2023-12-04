#include "main.h"

/**
 * isBinary - checks if a given integer is a binary number
 * @i: the integer to check
 *
 * Return: 1 if the integer is  binary number, 0 otherwis
 */

int isBinary(const int i)
{
	int j = i;

	while (j > 0)
	{
		int digit = j % 10;

		if (digit != 0 && digit != 1)
		{
			return (0); /* Not a binary number */
		}
		j /= 10;

	}
	return (1); /* Binary number */
}

