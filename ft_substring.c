#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	t_size	i;
	char	*sub;

	i = 0;
	sub = (char *)ft_calloc(len, sizeof(char));
	if (!sub || start > ft_strlen(s))
		return (NULL);
	while (i < len)
		ft_memcpy(sub, s[start], len);
	return (sub);
}
