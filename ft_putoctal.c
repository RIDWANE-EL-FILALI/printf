#include "main.h"

/**
 * ft_putoctal - a function that convert to octal.
 * @n: the number to convert
 * @count: pointer back the ft_putchar
 *
 * Rteurn: void
 */
void    ft_putoctal(unsigned long n, int *count)
{
        if (n >= 8)
        {
                ft_putoctal(n / 8, count);
                ft_putoctal(n % 8, count);
        }
        else if (n < 8)
                ft_putchar(n + 48, count);
}
