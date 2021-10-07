#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	min;
	int	out;

	i = 0;
	min = 1;
	out = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		min *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		out = out * 10 + (str[i] - '0');
		i++;
	}
	return (out * min);
}

int main(int argc, char const *argv[])
{
	printf("%d\n", ft_atoi("NULL"));
	return 0;
}
