#include "libft.h"

int	ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + 32);
	return (c);
}

// int main(int argc, char const *argv[])
// {
// 	int	i;
// 	int	a;

// 	i = 0;
// 	while (i <= 47)
// 	{
// 		a = ft_tolower(i);
// 		printf("%c\n", ft_tolower(a));
// 		i++;
// 	}
// 	return 0;
// }
