#include "main.h"

void	ft_putpointer(void *p, int *count)
{
	ft_putstr("0x", count);
	ft_puthex((unsigned long long)p, count);
}
