#include "libft.h"

t_size	ft_strlcat(char *dst, const char *src, size_t n)
{
	t_size	dstlen;
	t_size	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (!n || dstlen >= n)
		return (srclen + n);
	ft_memcpy(dst + dstlen, src, n - dstlen - 1);
	dst[n - 1] = '\0';
	return (srclen + dstlen);
}

// int main(int argc, char const *argv[])
// {
// 	char	*dest;

// 	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
// 		return (0);
// 	ft_memset(dest, 0, 15);
// 	ft_memset(dest, 'r', 6);
// 	dest[0] = '\0';
// 	dest[11] = 'a';
// 	printf("%zu\n", ft_strlcat(dest, "lorem ipsum", 15));
// 	printf("%s\n", dest);
// 	return 0;
// }
