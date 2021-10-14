#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = ft_strlen(s);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > i)
		return (ft_strdup(s));
	sub = (char *)ft_calloc(len + 1, sizeof(char));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}

// int main(int argc, char const *argv[])
// {
// 	char * s = ft_substr("tripouille", 1, 1);

// 	printf("%s\n", s);
// 	return 0;
// }