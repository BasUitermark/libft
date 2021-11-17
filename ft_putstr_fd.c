#include "libft.h"

size_t	ft_putstr_fd(char *str, int fd)
{
	t_size	i;
	t_size	out;

	i = 0;
	out = 0;
	while (str[i])
	{
		out += ft_putchar_fd(str[i], fd);
		i++;
	}
	return (out);
}
