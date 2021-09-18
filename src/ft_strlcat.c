#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	if (n < i)
	{
		while (src[j])
			j++;
		return (n + j);
	}
	while (n > 0 && i < n - 1 && src[j])
		dst[i++] = src[j++];
	dst[i] = '\0';
	while (src[j++])
		i++;
	return (i);
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
	char s1[] = "a string";
	char s2[] = "this is ";
	printf("%ld\n", ft_strlcat(s2, s1, 12));
	printf("%s\n", s2);
	return 0;
}
