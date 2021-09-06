char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*temp;

	i = 0;
	temp = dest;
	while (*dest)
		dest++;
	while (src[i] != '\0' && i < nb)
	{
		*dest = src[i];
		dest++;
		i++;
	}
	*dest = '\0';
	return (temp);
}
