#include "libft.h"

t_size	ft_strlcpy(char *dst, const char *src, size_t size)
{
	t_size	i;

	i = -1;
	while (src[++i] != '\0' && dst[i] != '\0' && ++i < size)
		dst[i] = src[i];
	return (size);
}

// int main(int argc, char const *argv[])
// {
// 	const char *string1 = "string to copy";
// 	char string2[30];

// 	printf("%zu\n", ft_strlcpy(string2, string1, 0));
// 	printf("%s\n", string2);
// 	return 0;
// }
