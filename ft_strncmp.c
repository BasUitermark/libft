#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	t_size	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (((unsigned char)str1[i]) - ((unsigned char)str2[i]));
		i++;
	}
	return (0);
}

// int main(int argc, char const *argv[])
// {
// 	printf("%d\n", ft_strncmp("test\200", "test\0", 6));
// 	return 0;
// }
