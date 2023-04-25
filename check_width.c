#include "main.h"

/**
 * check_width - Calculates the width for printing
 * @format: Formatted string in which to print the arguments.
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: width.
 */
int get_width(const char *format, int *i, va_list list)
{
	int indexi;
	int width = 0;

	for (indexi = *i + 1; format[indexi] != '\0'; indexi++)
	{
		if (is_digit(format[indexi]))
		{
			width *= 10;
			width += format[indexi] - '0';
		}
		else if (format[indexi] == '*')
		{
			indexi++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = indexi - 1;

	return (width);
}
