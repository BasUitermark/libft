#include <stdlib.h>
#include <stdio.h>

static size_t	ft_strcount(char const *s, char c)
{
	size_t	i;
	size_t	strs;

	i = -1;
	strs = 0;
	while (s[++i] != '\0')
	{
		if (s[i] != c)
			strs++;
		while (s[i] != c && s[i + 1]);
			i++;
	}
	printf("%ld\n", strs);
	return (strs);
}

char**	ft_strsplit(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	j;
	size_t	str_count;
	size_t	str_len;

	i = -1;
	j = 0;
	str_count = ft_strcount(s, c);
}

int main(int argc, char const *argv[])
{
	char string[] = "this is a string";
	ft_strcount(string, ' ');
	return 0;
}
