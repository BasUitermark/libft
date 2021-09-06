#include <stdlib.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	unsigned char	*ptr;

	i = -1;
	ptr = (unsigned char*)str;
	while (++i < n)
	{
		if(ptr[i] == (char)c)
			return (ptr + i);
	}
	return (0);
}
