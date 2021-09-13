char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*temp;

	i = 0;
	temp = dest;
	while (*dest)
		dest++;
	while (src[i] != '\0' && i < nb)
	{
		*dest = src[i];
		dest++;
		i++;
	}
	*dest = '\0';
	return (temp);
}

#include <stdio.h>

int	main(void)
{
	char	string1[] = "Hello";
	char	string2[] = " world!";

	ft_strncat(string1, string2, 6);
	printf("%s\n", string1);
}