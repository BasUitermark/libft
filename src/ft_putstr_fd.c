#include <unistd.h>

void	ft_putstr_fd(char *str, int fd)
{
	while (*str != '\0')
		write(fd, str++, 1);
}

int main(int argc, char const *argv[])
{
	ft_putstr_fd("this is a string", 1);
	return 0;
}
