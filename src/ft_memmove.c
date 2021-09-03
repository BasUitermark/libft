#include <stdlib.h>

typedef unsigned char t_u8;
typedef unsigned int t_u32;
typedef size_t t_size;

void	*ft_memmove(void *dst, const void *src, t_size len)
{
	t_u32	i;

	i = -1;
	if (src < dst)// checks if src is before dst in memory. If yes, then copy from the end to the beginning
	{
		while (len-- > 0)
			((t_u8 *)dst)[len] = ((t_u8 *)src)[len];
	}
	else// else is copies from the beginning to the end
	{
		while (++i < len)
			((t_u8 *)dst)[i] = ((t_u8 *)src)[i];
	}
	return (dst);
}

// int main(int argc, char const *argv[])
// {
// 	char A[] = "abcde"; // SRC
// 	char B[5];			// DST

// 	ft_memmove(B, A, 3);

// 	return 0;
// }
