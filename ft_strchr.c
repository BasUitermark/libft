#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	t_size	i;

	i = -1;
	while (str[++i] != '\0')
	{
		if (str[i] == c)
			return (&((char *)str)[i]);
	}
	return (NULL);
}
