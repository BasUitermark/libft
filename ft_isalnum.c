#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
