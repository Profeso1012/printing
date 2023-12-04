#include "main.h"

/**
 * determineBase - Determines the base of a given integer.
 * @i: The integer to check.
 * Return: The base (2, 8, 10, or 16) of the integer.
 */
int determineBase(const int i)
{
	int j = i;

	if (isBinary(j))
	{
		return (2);
	}
	else if (isOctal(j))
	{
		return (8);
	}
	else if (isHexadecimal(j))
	{
		return (16);
	}
	else
	{
		return (10); /* Decimal by default */
	}
}

