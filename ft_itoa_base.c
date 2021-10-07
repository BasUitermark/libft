#include "libft.h"

char	*ft_itoa_base(int n, int base)
{
	int			i;
	char		*str;
	int			len;
	int			ng;
	const char	*hex;

	i = ft_intlen(n);
	len = n;
	hex = "0123456789ABCDEF";
	str = (char *)ft_calloc(i, sizeof(char));
	if (n < 0)
		ng = 1;
	if (!str)
		return (NULL);
	str[i + 1] = '\0';
	while (i--)
	{
		str[i] = hex[n % base];
		n /= base;
	}
	if (ng == 1)
		str[0] = '-';
	return (str);
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("%s\n", ft_itoa_base(-26, 10));
	return 0;
}