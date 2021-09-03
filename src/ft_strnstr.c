#include <string.h>

char	*ft_strnstr(char *string, char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if(to_find[0] == '\0')
		return (string);
	while (string[i] != '\0' && i < len)
	{
		j = 0;
		while (string[i + j] == to_find[j] && i + j < len)
		{
			if (to_find[j + 1] == '\0')
				return (string + i);
			j++;
		}	
		i++;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_strnstr("this is a string, it really is.", "string", 8));
}
