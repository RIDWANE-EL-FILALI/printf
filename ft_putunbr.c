#include "main.h"

/**
 * ft_putunbr - a function that prints a unsigned number.
 * @n: the number
 * @count: counter
 *
 * Rteurn: void
 */
void	ft_putunbr(unsigned int n, int *count)
{
	if (n >= 10)
	{
		ft_putunbr((n / 10), count);
		ft_putunbr((n % 10), count);
	}
	else
		ft_putchar((n + 48), count);
}
