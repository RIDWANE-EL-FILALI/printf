#include "main.h"

/**
 * ft_putstr - a function that prints a string.
 * @str: the giving string
 * @count:
 *
 * Rteurn: void
 */
void	ft_putstr(const char *str, int *count)
{
	int	i;

	if (!str)
		*count += write(1, "(null)", 6);
	else
	{
		i = 0;
		while (str[i])
			ft_putchar(str[i++], count);
	}
}
