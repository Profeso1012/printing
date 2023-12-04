#include "main.h"

/**
 * custom_itoa - Convert an integer to a string representation.
 * @num: The integer to be converted.
 * @buffer: The buffer to store the resulting string.
 * Return: None.
 */

void custom_itoa(int num, char *buffer)
{
	int i = 0;
	int divisor = 1;

	if (num == 0)
	{
		buffer[i++] = '0';
	} else
	{
		if (num < 0)
		{
			buffer[i++] = '-';
			num = -num;
		}
		while (num / divisor >= 10)
		{
			divisor *= 10;
		}
		while (divisor > 0)
		{
			buffer[i++] = (num / divisor) + '0';
			num %= divisor;
			divisor /= 10;
		}
	}
	buffer[i] = '\0';  /*Null-terminate the string.*/
}

