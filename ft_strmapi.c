#include "libft.h"
#include <string.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	t_size	i;
	char	*out;

	i = 0;
	out = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!out || !f)
		return (NULL);
	while (s[i])
	{
		out[i] = f(i, s[i]);
		i++;
	}
	out[i] = '\0';
	return (out);
}

// char	change(unsigned int i, char c)
// {
// 	if (c >= 'a' && c <= 'z')
// 		return (c - 32);
// 	else if (c >= 'A' && c <= 'Z')
// 		return (c + 32);
// 	return (c);
// }

// int main(int argc, char const *argv[])
// {
// 	char	*str;
// 	char	*strmapi;

// 	str = (char *)malloc(sizeof(*str) * 12);
// 	strcpy(str, "LoReM iPsUm");
// 	strmapi = ft_strmapi(str, &change);
// 	printf("%s\n", strmapi);
// 	return 0;
// }
