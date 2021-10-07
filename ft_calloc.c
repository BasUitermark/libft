#include	"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	return (ft_memset(malloc(count * size), '0', count * size));
}
