#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strrchr(const char *str, int c)
{
	size_t	len;

	len = ft_strlen((char *)str);
	while (str[--len] > 0)
	{
		if (str[len] == c)
			return ((char *)str + len);
	}
	return (0);
}
