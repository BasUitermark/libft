#include "libft.h"

int	ft_intlen(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	int		ng;

	i = ft_intlen(n);
	printf("%d\n", i);
	str = (char *)ft_calloc(i + 1, sizeof(char));
	printf("%s\n", str);
	if (n < 0)
	{
		ng = 1;
		n *= -1;
	}
	if (!str)
		return (NULL);
	str[i + 1] = '\0';
	while (i--)
	{
		str[i] = n % 10 + '0';
		n /= 10;
	}
	if (ng == 1)
		str[0] = '-';
	return (str);
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("%s\n", ft_itoa(0));
	return 0;
}