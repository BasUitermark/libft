int	ft_isascii(char c)
{
	if ((c >= 0 && c <= 127))
		return (1);
	else
		return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_isascii(2));
// }
