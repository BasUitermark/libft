#include <stdlib.h>

char	*ft_strcpy(char *dest, char const *src, size_t size)
{
	size_t	i;

	i = -1;
	while (src[++i] != '\0' && i < size)
		dest[i] = src[i];
	dest[++i] = '\0';
	return (dest);
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("%s\n", ft_strcpy());
	return 0;
}
