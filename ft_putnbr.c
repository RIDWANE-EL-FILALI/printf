#include "main.h"

/**
 * ft_putnbr - a function that prints a number.
 * @n: the number
 * @count: pointer for putchar
 *
 * Rteurn: void
 */
void	ft_putnbr(int n, int *count)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648", count);
		return;
	}
	if (n < 0)
	{
		n = -n;
		ft_putchar(('-'), count);
	}
	if (n >= 10)
		ft_putnbr(n / 10, count);
	ft_putchar(n % 10 + 48, count);
}
