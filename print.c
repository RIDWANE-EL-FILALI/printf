#include "main.h"

/**
 * ft_print - a function that handle the after % case.
 * _printf - _Printf function
 * @args: the element to handle
 * @format: the strinf giving
 * @count: counter how much printed
 * @i: over the string
 *
 * Rteurn: void
 */
void	ft_print(va_list args, const char *format, int *count, int *i)
{
	if (format[*i] == '%')
		ft_putchar(format[*i], count);
	else if (format[*i] == 'c')
		ft_putchar(va_arg(args, int), count);
	else if (format[*i] == 's')
		ft_putstr(va_arg(args, char *), count);
	else if (format[*i] == 'd' || format[*i] == 'i')
		ft_putnbr(va_arg(args, int), count);
	else if (format[*i] == 'u')
		ft_putunbr(va_arg(args, unsigned int), count);
	else if (format[*i] == 'x')
		ft_puthex(va_arg(args, unsigned int), count);
	else if (format[*i] == 'X')
		ft_putuphex(va_arg(args, unsigned int), count);
	else if (format[*i] == 'p')
		ft_putpointer(va_arg(args, void *), count);
	else if (format[*i] == 'o')
		ft_putoctal(va_arg(args, unsigned int), count);
	else
	{
		ft_putchar('%', count);
		ft_putchar(format[*i], count);
	}
	*i += 1;
}

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */

int	_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;
	int		n;

	va_start(args, format);
	i = 0;
	count = 0;
	n = ft_strlen(format);
	while (format[i] && i < n)
	{
		if (format[i] != '%')
		{
			ft_putchar(format[i], &count);
			i++;
		}
		else if (i < n)
		{
			i++;
			ft_print(args, format, &count, &i);
		}
	}
	va_end(args);
	return (count);
}
