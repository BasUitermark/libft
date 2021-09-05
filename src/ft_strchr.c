#include <stdlib.h>

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = -1;
	while (str[++i] != '\0')
	{
		if (str[i] == c)
			return ((char *)str + i);
	}
	return (0);
}
