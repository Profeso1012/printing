#include "main.h"

/**
 * custom_atoi_wrapper - pointer to function using custom functions.
 * @i: The integer to be converted.
 * This function serves as a wrapper around custom conversion functions.
 * Return: The decimal representation of the input integer @i.
 */

int custom_atoi_wrapper(const int i)
{
	char str[20]; /* Allocate a buffer to hold the integer as a string */

	custom_itoa(i, str); /* Convert the integer to a string */
	return (custom_atoi(str)); /* Convert the string to an integer */
}

/**
 * convertToDecimal - Convert an integer using a custom conversion function.
 * @i: The integer to be converted.
 * @converter: Function pointer to the custom conversion function.
 * Return: The decimal representation of the input integer @i
 */

int convertToDecimal(const int i, int (*converter)(const int))
{
	return (converter(i));
}
