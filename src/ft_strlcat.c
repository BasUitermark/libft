#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	i = 0;
	j = 0;

	while (dst[j] != '\0')
		j++;
	while (++i < n)
	{
		dst[j++] = src[i++];
		if(src[i + 1] == '\0')
			return (i + 1);
	}
	dst[++j] = '\0';
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
	char s1[] = "a string";
	char s2[] = "this is ";
	printf("%ld\n", ft_strlcat(s2, s1, 8));
	printf("%s\n", s2);
	return 0;
}
