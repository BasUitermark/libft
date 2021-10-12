#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	t_size	i;
	char	*sub;

	i = -1;
	sub = (char *)ft_calloc(len + 1, sizeof(char));
	if (!sub || start > ft_strlen(s))
		return ("");
	while (++i < len)
		ft_memcpy(sub, s + start, len);
	sub[i] = '\0';
	return (sub);
}

// int main(int argc, char const *argv[])
// {
// 	printf("%s\n", ft_substr("lorem ipsum dolor sit amet", 400, 20));
// 	return 0;
// }