#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, t_size len)
{
	t_size	i;
	t_size	j;

	i = -1;
	j = 0;
	if (!little)
		return ((char *)big);
	while (big[++i] != '\0' && i < len)
	{
		while (big[i] == little[j] && i < len)
		{
			i++;
			j++;
		}
		if (little[j] == '\0')
			return (&((char *)big)[i - j]);
		j = 0;
	}
	return (NULL);
}

// int main(int argc, char const *argv[])
// {
// 	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30));
// 	return 0;
// }
