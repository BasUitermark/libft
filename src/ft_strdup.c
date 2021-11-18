#include "../libft.h"

char	*ft_strdup(const char *str)
{
	char	*out;

	out = (char *)ft_calloc(ft_strlen(str) + 1, sizeof(char));
	if (!out)
		return (NULL);
	ft_strlcpy(out, str, ft_strlen(str) + 1);
	return (out);
}
