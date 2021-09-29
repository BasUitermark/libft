#include <stdlib.h>
#include <string.h>

static size_t	ft_strcount(char const *s, char c)
{
	size_t	words;
	size_t	i;

	words = 0;
	i = -1;
	while(s[++i] != '\0')
	{
		if (s[i] != c)
			words++;
		while (s[i] != c && s[i + 1])
			i++;
	}
	return (words);
}

static size_t	ft_strlen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

char**	ft_strsplit(char const *s, char c)
{
	char**	result;
	size_t	str_count;
	size_t	str_len;
	int	i;
	int	j;

	i = -1;
	j = 0;
	str_count = ft_strcount(s, c);//checks the amount of "strings" with the delimiter "c"
	if (!s || !str_count || !(result = (calloc(str_count + 1, sizeof(char *)))))
		return (NULL);
	while (++i < str_count)
	{
		while (s[j] == c)
			j++;
		str_len = ft_strlen(&s[j], c);
		if (result[i] = (char *)malloc(str_len * sizeof(char) + 1))
		{
			((char *)memcpy(result[i], &s[j], str_len))[str_len] = '\0';
			j += str_len;
		}
	}
	return (result);
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
	char	string[] = "Hello     this is a string that needs to be split";
	char **new;

	int i;
	i = 0;
	new = ft_strsplit(string, ' ');
	while (new[i])
	{
		printf("%s\n", new[i]);
		i++;
	}

	return 0;
}
