#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	t_size	i;

	i = -1;
	while (str1[++i] != '\0' && str2[i] != '\0' && i < n)
	{
		if (str1[i] != str2[i])
			return (str1 - str2);
	}
	return (0);
}

// int main(int argc, char const *argv[])
// {
// 	printf("%d\n", ft_strncmp("this is a string", "thid is a string", 16));
// 	return 0;
// }
