#include "main.h"

/**
 * ft_putuphex - a function that prints a hexa in uppercase.
 * @n: number to convert
 * @count: counter much char printed
 *
 * Rteurn: void
 */
void	ft_putuphex(unsigned int n, int *count)
{
	if (n >= 16)
	{
		ft_putuphex(n / 16, count);
		ft_putuphex(n % 16, count);
	}
	else if (n < 10)
		ft_putchar(n + 48, count);
	else
		ft_putchar(n + 55, count);
}
