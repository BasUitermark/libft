#include "libft.h"
#include <stdlib.h>

void	ft_isnegative(int *n, size_t *ng)
{
	*n *= -1;
	*ng = 1;
}

char	*ft_itoa(int n)
{
	size_t	i;
	int	len;
	size_t	ng;
	char	*str;

	i = 2;
	len = n;
	if (n < 0)
	{
		ft_isnegative(&n, &ng);
		i++;
	}
	while (len /= 10)
		i++;
	if ((str = (char*)malloc(sizeof(char) * i)) == NULL)
		return (NULL);
	str[--i] = '\0';
	while (i--)
	{
		str[i] = n % 10 + '0';
		n /= 10;
	}
	if (ng == 1)
		str[0] = '-';
	return(str);
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("%s\n", ft_itoa(25));
	return 0;
}
