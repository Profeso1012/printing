#include "main.h"
/**
 * _printf - Custom printf function with support for %c and %s specifiers
 * @format: A format string with optional specifiers
 * Return: The number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{

	int input = 0;          /* Count of characters printed */
	va_list arguments;       /* List of variable arguments */
	char c;                  /* Character specifier */
	int l;                   /* Length of string specifier */
	char *str;               /* String specifier */

	if (!format)
		return (-1);         /* Return -1 for NULL format string */
	va_start(arguments, format); /* Initialize variable arguments */
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1); /* Write non-specifier characters */
			input++;
		} else
		{
			format++;
			switch (*format)
			{
				case '\0':
					break; /* Ignore trailing % */
				case '%':
					write(1, format, 1); /* Write a literal % */
					input++;
					break;
				case 'c':
					c = va_arg(arguments, int);
					write(1, &c, 1); /* Write character specifier */
					input++;
					break;
				case 's':
					str = va_arg(arguments, char*);
					l = strlen(str);
					write(1, str, l); /* Write string specifier */
					input += l;
					break;
				default:
					break;  /* Handle invalid format specifiers */
			}
		} format++;
	}
	va_end(arguments); /* Clean up variable arguments */
	return (input);   /* Return the total number of characters printed */
}

