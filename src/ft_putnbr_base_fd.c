#include "../libft.h"
static int	ft_baselen(size_t n, size_t base)
{
	int	i;

	i = 0;
	while (n)
	{
		n /= base;
		i++;
	}
	return (i);
}

size_t	ft_putnbr_base_fd(size_t n, int fd, size_t base)
{
	size_t	out;
	char	*hex;

	hex = "0123456789abcdef";
	out = 0;
	if (n > 15)
	{
		ft_putnbr_base_fd(n / base, fd, base);
		ft_putnbr_base_fd(n % base, fd, base);
	}
	else
		ft_putchar_fd(hex[n % base], fd);
	return (ft_baselen(n, base));
}
