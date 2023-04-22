#include "main.h"

/**
 * ft_puthex - a function that convert to hexa.
 * @n: the number to convert
 * @count: pointer back the ft_putchar
 *
 * Rteurn: void
 */
void	ft_puthex(unsigned long n, int *count)
{
	if (n >= 16)
	{
		ft_puthex(n / 16, count);
		ft_puthex(n % 16, count);
	}
	else if (n < 10)
		ft_putchar(n + 48, count);
	else
		ft_putchar(n + 87, count);
}
