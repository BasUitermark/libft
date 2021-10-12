#include "libft.h"

static t_size	ft_wcount(char const *s, char c)
{
	t_size	i;
	t_size	wcount;

	wcount = 0;
	i = -1;
	while (s[++i] != '\0')
	{
		if (s[i] != c)
			wcount++;
		while (s[i] != c && s[i + 1])
			i++;
	}
	return (wcount);
}

static t_size	ft_strlenc(char const *s, char c)
{
	t_size	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	t_size	wcount;
	t_size	lcount;
	t_size	i;
	t_size	j;
	char	**out;

	i = -1;
	j = 0;
	wcount = ft_wcount(s, c);
	out = (char **)ft_calloc(wcount + 1, sizeof(char *));
	if (!out)
		return (NULL);
	while (++i < wcount)
	{
		while (s[j] == c)
			j++;
		lcount = ft_strlenc(&s[j], c);
		out[i] = (char *)ft_calloc(lcount + 1, sizeof(char));
		ft_strlcpy(out[i], &s[j], lcount + 1);
		j += lcount + 1;
	}
	return (out);
}

// int main(int argc, char const *argv[])
// {
// 	char	**new;
// 	int		i;

// 	i = 0;
// 	new = ft_split("", ' ');
// 	while (new[i])
// 	{
// 		printf("%s\n", new[i]);
// 		i++;
// 	}
// 	return 0;
// }
