#include "libft.h"

void	ft_putndl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('/n', fd);
}
