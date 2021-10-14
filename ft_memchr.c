#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	t_size	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)str)[i] == (unsigned char)c)
			return ((void *)str + i);
		i++;
	}
	return (NULL);
}

// int main(int argc, char const *argv[])
// {
// 	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};

// 	printf("%s\n", (char *)ft_memchr(tab, -1, 7));
// 	return 0;
// }
