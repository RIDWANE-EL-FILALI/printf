#include "main.h"

/**
 * ft_putpointer - a function that prints a hexa in samll casse.
 * @p : numebr
 * @count : pointer to putchar
 *
 * Rteurn: void
 */
void	ft_putpointer(void *p, int *count)
{
	ft_putstr("0x", count);
	ft_puthex((unsigned long)p, count);
}
