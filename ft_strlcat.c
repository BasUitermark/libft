#include "libft.h"

t_size	ft_strlcat(char *dst, const char *src, size_t n)
{
	t_size	i;
	t_size	dstlen;

	i = -1;
	dstlen = ft_strlen(dst);
	if (!n || dstlen >= n)
		return (ft_strlen(src) + n);
	while (src[++i] && n - dstlen - 1)
		dst[dstlen + i] = src[i];
	dst[dstlen + i] = '\0';
	return (ft_strlen(src) + dstlen);
}

int main(int argc, char const *argv[])
{
	char	thing1[] = "this is a";
	char	thing2[] = " string";

	printf("%zu\n", ft_strlcat(thing1, thing2, sizeof(thing2)));
	printf("%s\n", thing1);
	return 0;
}
