#include "libft.h"
#include <stdlib.h>

void	ft_isnegative(int *n, size_t *ng)
{
	*n *= -1;
	*ng = 1;
}

char	*ft_itoa_base(int n, int base)
{
	size_t	i;
	char	*str;
	int	len;
	size_t	ng;
	const char	*hex;

	i = 1;
	len = n;
	hex = "0123456789ABCDEF";
	if (n < 0)
	{
		ft_isnegative(&n, &ng);
		i++;
	}
	while (len /= base)
		i++;
	if ((str = (char*)malloc(sizeof(char) * i)) == NULL)
		return (NULL);
	str[i] = '\0';
	while (i--)
	{
		str[i] = hex[n % base];
		n /= base;
	}
	if (ng == 1)
		str[0] = '-';
	return(str);
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("%s\n", ft_itoa_base(26, 8));
	return 0;
}
