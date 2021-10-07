#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	t_size	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	i--;
	while (str[i--] != 0)
	{
		if (str[i] == c)
			return (&((char *)str)[i]);
	}
	return (NULL);
}
