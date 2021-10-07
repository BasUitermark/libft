#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	t_size	i;

	i = -1;
	while (++i < n)
	{
		if (((char *)str1)[i] != ((char *)str2)[i])
			return (str1 - str2);
	}
	return (0);
}
