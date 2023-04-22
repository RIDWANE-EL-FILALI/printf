# ifndef MAIN_H
#define MAIN_H


# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdarg.h>
# include <limits.h>

void	ft_print(va_list args, const char *format, int *count, int *i);
int		_printf(const char *format, ...);
void	ft_putchar(int c, int *count);
void	ft_puthex(unsigned long n, int *count);
void	ft_putnbr(int n, int *count);
void	ft_putstr(const char *str, int *count);
void	ft_putuphex(unsigned int n, int *count);
void	ft_putpointer(void *p, int *count);
void	ft_putunbr(unsigned int n, int *count);
size_t	ft_strlen(const char *s);
void    ft_putoctal(unsigned long n, int *count);


#endif
