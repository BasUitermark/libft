#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int main(int argc, char const *argv[])
{
	ft_putchar_fd('a', 1);
	return 0;
}