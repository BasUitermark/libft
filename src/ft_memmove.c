#include <stdlib.h>

typedef unsigned char t_u8;
typedef unsigned int t_u32;
typedef size_t t_size;

void	*ft_memmove(void *dst, const void *src, t_size len)
{
	t_u32	i;

	i = -1;
	if (src < dst)
	{
		while (len-- > 0)
			((t_u8 *)dst)[len] = ((t_u8 *)src)[len];
	}
	else
	{
		while (++i < len)
			((t_u8 *)dst)[i] = ((t_u8 *)src)[i];
	}
	return (dst);
}
