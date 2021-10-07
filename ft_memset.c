#include "libft.h"
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = -1;
	while (++i < len)
		((char *)b)[i] = (unsigned int)c;
	return (b);
}

// int main(int argc, char const *argv[])
// {
// 	char thing[] = "Hello World!";

// 	printf("%s'\n", ft_memset(thing, 'a', sizeof(thing)));
// 	printf("%s'\n", memset(thing, 'b', 6));
// 	return 0;
// }
