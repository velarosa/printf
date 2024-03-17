#include "main.h"
/**
 * conversion - a function that handel conversion specifiers.
 * @specifier: the specifier of argements.
 * @args: the list of argements to match th specifier.
 *
 * Return: Alwyas (count) Success.
 */

int conversion(char specifier, va_list args)
{
	int count = 0;

	if (specifier == 'c')
		count += print_char(va_arg(args, int));
	if (specifier == 's')
		count += print_str(va_arg(args, char *));
	if (specifier == '%')
		count += write(1, &specifier, 1);
	return (count);
}

/**
 * print_char - a function that prints a the character from %c.
 * @c: the char to print.
 *
 * Return: the charachter.
 */

int print_char(int c)
{
	return (write(1, &c, 1));
}

/**
 * print_str - a function that prints the string from %s.
 * @str: the string to print.
 *
 * Return: Alwyas (
 */

int print_str(char *str)
{
	int count = 0;

	while (*str)
	{
		write(1, str, strlen(str));
		count = strlen(str);
	}
	return (count);
}
