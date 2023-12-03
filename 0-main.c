#include "main.h"
#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * This function demonstrates the usage of the custom _printf function
 * and compares its output with the standard printf function.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int len1, len2;

	len1 = _printf("my name is %s, fav alphabet- %c, score: 10%%\n", "emma", 'a');
	len2 = printf("my name is %s, fav alphabet- %c, score: 10%%\n", "emma", 'a');
	printf("%d %d\n", len1, len2);
	return (0);
}
