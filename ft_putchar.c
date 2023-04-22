#include "main.h"

void	ft_putchar(int c, int *count)
{
	*count += write(1, &c, 1);
}
