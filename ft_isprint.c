#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 127)
		return (1);
	return (0);
}

// int main(int argc, char const *argv[])
// {
// 	printf("%d\n", ft_isprint(128));
// 	return 0;
// }