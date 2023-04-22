#include "main.h"

/**
 * ft_putchar - a function that prints a char.
 * @c: teh char
 * @count: pointer to have how much he print
 *
 * Rteurn: void
 */
void	ft_putchar(int c, int *count)
{
	*count += write(1, &c, 1);
}
