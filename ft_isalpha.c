#include "libft.h"

int	ft_isalpha(int c)
{
	if (ft_islower(c) || ft_isupper(c))
		return (1);
	else
		return (0);
}

// int main(int argc, char const *argv[])
// {
// 	printf("%d\n", ft_isalpha('a'));
// 	return 0;
// }
