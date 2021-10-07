#include "libft.h"

char	*ft_itoa(int n)
{
	int			i;
	char		*str;
	int			len;
	int			ng;

	i = ft_intlen(n);
	len = n;
	str = (char *)ft_calloc(i, sizeof(char));
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

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
// 	printf("%s\n", ft_itoa(0));
// 	return 0;
// }