#include "main.h"

/**
 * custom_atoi - Custom implementation of the atoi function.
 * @str: The input string to convert to an integer.
 * converts the given string @str to an integer.
 * Return: num
 */

int custom_atoi(const char *str)
{
	int base = 10;
	int num = 0;
	int i = 0;

	if (!str || !str[0])  /*Check if the string is empty.*/
	{
		return (0);
	}
	if (str[0] == '0')  /* Check if the string starts with a base prefix.*/
	{
		if (str[1] == 'x')
		{
			base = 16;
			str++;
		} else if (str[1] == 'b')
		{
			base = 2;
			str++;
		} else
		{
			base = 8;
		}
	} while (str[i] != '\0')  /* Convert the string to an integer.*/
	{
		int digit = str[i] - '0';

		if (digit < 0 || digit >= base)
		{
			return (0);
		}
		num = num * base + digit;
		i++;
	}
	return (num);
}

