#include "main.h"
/**
 * _printf - a function that produces output according to format.
 * @format: character string.
 * Description: Print ARGUMENT(s) according to FORMAT
 * or execute according to OPTION
 *
 * Return: the number of charachters printed.
 */
int _printf(const char *format, ...)
{
	int printed = 0;
	va_list args;

	if (!*format)
		return (-1);

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
			printed += conversion(*(++format), args);
		else
			printed += write(1, format, 1);
		++format;
	}
	va_end(args);
	return (printed);
}
