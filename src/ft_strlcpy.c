#include <stdlib.h>

size_t	ft_strlcpy( char *dst, const char *src, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
	{
		dst[i] = src[i];
		if(src[i + 1] == '\0')
			return (i + 1);
	}
	dst[++i] = '\0';
}
