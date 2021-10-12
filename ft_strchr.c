#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	t_size	i;
	t_size	len;

	i = -1;
	len = ft_strlen(str);
	if (c == '\0')
		return (&((char *)str)[len]);
	while (str[++i] != '\0')
	{
		if (str[i] == c)
			return (&((char *)str)[i]);
	}
	return (NULL);
}

// int main(int argc, char const *argv[])
// {
// 	printf("%s\n", ft_strchr("", '\0'));
// 	return 0;
// }
