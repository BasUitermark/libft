#include "../include/libft.h"

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
