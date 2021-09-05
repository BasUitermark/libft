#include <string.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		j;
	char	*substring;

	i = 0;
	j = 0;
	substring = (char *)malloc(1 + len * sizeof(char));

	if (len == 0 || substring == NULL)
		return (0);
	while (s[i] != '\0' && i < len)
	{
		if (i < start)
		{
			i++;
			continue ;
		}
		while (i < len)
		{
			substring[j] = s[i];
			i++;
			j++;
			if (i == len)
			{
				substring[j++] = '\0';
				return (substring);
			}
		}
	}
	return (0);
}
