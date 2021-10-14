#include "libft.h"

t_size	ft_strlcat(char *dst, const char *src, size_t n)
{
	t_size	dstlen;
	t_size	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstlen >= n)
		return (srclen + n);
	if (n >= dstlen)
	{
		ft_strlcpy(dst + dstlen, src, n - dstlen);
	}
	return (srclen + dstlen);
}

// int main(int argc, char const *argv[])
// {
// 	char	dest[30];
// 	char	*src = (char *)"AAAAAAAAA";

// 	ft_memset(dest, 0, 30);
// 	ft_memset(dest, 'B', 4);
// 	printf("%zu\n", ft_strlcat(dest, src, 6));
// 	printf("%s\n", dest);
// 	return 0;
// }
