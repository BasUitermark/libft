#include "libft.h"

// t_size	ft_strlcpy(char *dst, const char *src, size_t n)
// {
// 	t_size	srclen;

// 	srclen = ft_strlen(src);
// 	if (!n)
// 		return (srclen);
// 	ft_memcpy(dst, src, srclen + 1);
// 	dst[n - 1] = '\0';
// 	return (srclen);
// }

t_size	ft_strlcpy(char *dst, const char *src, size_t n)
{
	t_size	srclen;

	srclen = ft_strlen(src);
	if (!n)
		return (srclen);
	if (srclen + 1 < n)
		ft_memcpy(dst, src, srclen + 1);
	 else if (n != 0)
	{
		ft_memcpy(dst, src, n - 1);
		dst[n - 1] = '\0';
	}
	return (srclen);
}

// int main(int argc, char const *argv[])
// {
// 	char	*dest;

// 	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
// 		return (0);
// 	ft_memset(dest, 0, 15);
// 	ft_memset(dest, 'r', 6);
// 	printf("%zu\n", ft_strlcpy(dest, "lorem ipsum", 3));
// 	printf("%s\n", dest);
// 	return 0;
// }
