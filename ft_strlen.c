#include "main.h"

/**
 * ft_strlen - returns the length of a string
 * @s: string
 * Return: length
 */
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
