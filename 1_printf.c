#include "main.h"

/**
 * _printf - Custom implementation of the printf function
 * @format: The format string specifying the output format
 * @...: Variable arguments based on the format string.
 * Return: The number of characters written (excluding the null byte),
 * or -1 if an error occurs.
 */

int _printf(const char *format, ...)
{
	int input = 0;
	int i;
	va_list arguments;
	char buffer[20];
	int l = 0;
	int d;

	if (!format)
		return (-1);
	va_start(arguments, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			input++;
		} else
		{
			format++;
			switch (*format)
			{
				case '\0':
					break;
				case 'd':
					d = va_arg(arguments, int);
					custom_itoa(d, buffer);
					l = strlen(buffer);
					write(1, buffer, l);
					input += l;
					break;
				case 'i':
					{
					i = va_arg(arguments, int);
					if (isBinary(i) || isOctal(i) || isHexadecimal(i))
					{
						int decimal = convertToDecimal(i, custom_atoi_wrapper);

						custom_itoa(decimal, buffer);
					} else
					{
						custom_itoa(i, buffer);
					}
					l = strlen(buffer);
					write(1, buffer, l);
					input += l;
					break;
					}
				default:
					/* Handle invalid format specifiers */
					break;
			}

		} format++;
	}
	va_end(arguments);
	return (input);
}

