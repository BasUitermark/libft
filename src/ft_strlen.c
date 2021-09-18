int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i++] != '\0')
		i++;
	return (i);
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("%d\n", ft_strlen("this is a string"));
	return 0;
}
