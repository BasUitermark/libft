#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, t_size len)
{
	t_size	i;
	t_size	j;

	i = 0;
	if (!*little)
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i] == little[j] && i < len)
		{
			i++;
			j++;
			if (little[j] == '\0')
				return (&((char *)big)[i - j]);
		}
		if (big[i] != little[j])
			i = i - j + 1;
		if (j == 0)
			i++;
	}
	return (NULL);
}

// #include <string.h>

// int main(int argc, char const *argv[])
// {
// 	// printf("%s\n", strnstr(NULL, "fake", 3));
// 	printf("%s\n", ft_strnstr(NULL, "fake", 3));
// 	return 0;
// }
