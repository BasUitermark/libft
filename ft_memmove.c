#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	t_size	i;

	i = -1;
	if (src < dst)
	{
		while (len-- > 0)
			((char *)dst)[len] = ((char *)src)[len];
	}
	else
	{
		while (++i < len)
			((char *)dst)[i] = ((char *)src)[i];
	}
	return (dst);
}

// int	main(void)
// {
// 	char text[] = "abcde";

// 	ft_memmove(&text[3], text, 2);
// 	printf("%s\n", text);
// }
