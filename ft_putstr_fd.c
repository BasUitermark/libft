#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	t_size	i;

	i = 0;
	while (str[i])
	{
		ft_putchar_fd(str[i], fd);
		i++;
	}
}