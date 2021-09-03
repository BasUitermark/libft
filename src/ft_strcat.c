char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	char			*temp;

	i = 0;
	temp = dest;
	while (*dest)
		dest++;
	while (src[i] != '\0')
	{
		*dest = src[i];
		dest++;
		i++;
	}
	*dest = '\0';
	return (temp);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	string1[] = "Hello";
// 	char	string2[] = "    woooorld!";

// 	ft_strcat(string1, string2);
// 	printf("%s\n", string1);
// }