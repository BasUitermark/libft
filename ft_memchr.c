#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	t_size	i;

	i = -1;
	while (++i < n)
	{
		if (((char *)str)[i] == c)
			return ((char *)str + i);
	}
	return (NULL);
}

// int main(int argc, char const *argv[])
// {
// 	char thing[] = "yeeeeeeeees";
// 	printf("%s\n", ft_memchr(thing, 'e', sizeof(thing)));
// 	return 0;
// }
