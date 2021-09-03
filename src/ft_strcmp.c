int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	string1[] = "his one is long";
// 	char	string2[] = "this one is long";

// 	printf("%d\n", ft_strcmp(string1, string2));
// }