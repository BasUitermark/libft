#include "../include/libft.h"

// static t_size	ft_wcount(char const *s, char c)
// {
// 	t_size	i;
// 	t_size	wcount;

// 	wcount = 0;
// 	i = 0;
// 	while (!s[i])
// 	{
// 		if (s[i] != c)
// 			wcount++;
// 		while (s[i] != c && s[i + 1])
// 			i++;
// 		i++;
// 	}
// 	return (wcount);
// }

// static void	ft_clean(char **out)
// {
// 	t_size	i;

// 	i = 0;
// 	while (out[i] != NULL)
// 	{
// 		free(out[i]);
// 		i++;
// 	}
// 	free (out);
// 	return ;
// }

// static char	**ft_array(t_size wcount, char const *s, char c, char **out)
// {
// 	t_size	lcount;
// 	t_size	i;
// 	t_size	j;

// 	i = 0;
// 	j = 0;
// 	while (i < wcount)
// 	{
// 		while (s[j] == c)
// 			j++;
// 		lcount = ft_strclen(&s[j], c);
// 		out[i] = (char *)ft_calloc(lcount + 1, sizeof(char));
// 		if (!out[i])
// 		{
// 			ft_clean(out);
// 			return (NULL);
// 		}
// 		ft_strlcpy(out[i], &s[j], lcount + 1);
// 		j += lcount + 1;
// 		i++;
// 	}
// 	return (out);
// }

// char	**ft_split(char const *s, char c)
// {
// 	t_size	wcount;
// 	char	**out;

// 	wcount = ft_wcount(s, c);
// 	out = (char **)ft_calloc(wcount + 1, sizeof(char *));
// 	if (!out)
// 		return (NULL);
// 	out = ft_array(wcount, s, c, out);
// 	return (out);
// }

static int	count_words(const char *str, char c)
{
	int i;
	int trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char		**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	if (!s || !(split = malloc((count_words(s, c) + 1) * sizeof(char *))))
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = word_dup(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
