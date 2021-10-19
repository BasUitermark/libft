#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	t_size	i;
	t_size	j;
	char	*out;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	out = (char *)ft_calloc(i + j + 2, sizeof(char));
	if (!out)
		return (NULL);
	ft_strlcpy(out, s1, i + 1);
	ft_strlcat(&out[i], s2, j + 1);
	out[i + j] = '\0';
	return (out);
}
