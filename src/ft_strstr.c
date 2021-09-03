char	*ft_strstr(char *string, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if(to_find[0] == '\0')
		return (0);
	while (string[i] != '\0')
	{
		j = 0;
		while (string[i + j] == to_find[j])
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
	printf("%s\n", ft_strstr("this is a string, it really is.", "no"));
}
