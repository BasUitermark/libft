#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdint.h>

/** 
 * With a given string count how many strs are contained
 * within the given string that are between the delimiter c.
 * @param s The string.
 * @param c The delimiter.
 * @param cnum The number of chars that are not the delimiter.
 * @return The num of valid "words" within the string.
 */
static int32_t ft_strcount(char const* s, char c)
{
    int32_t w;
    int32_t i;

    i = -1;
    w = 0;
    while (s[++i] != '\0')
    {
        if (s[i] != c)
            w++;
        while (s[i] != c && s[i + 1])
            i++;
    }
    return (w);
}

static int32_t ft_strclen(char const* s, char c)
{
    int32_t i;

    i = 0;
    while (s[i] != '\0' && s[i] != c)
    {
        i++;
    }
    return (i);
}

char **ft_strsplit(char const* s, char c)
{
    char    **out;
    int32_t    i;
    int32_t k;
    int32_t clen;
    int32_t strn;

    i = -1;
    k = 0;
    strn = ft_strcount(s, c);
    if (!s || !strn || !(out = (calloc(strn + 1, sizeof(char *)))))
        return (NULL);
    while (++i < strn)
    {
        while (s[k] == c)
            k++;
        clen = ft_strclen(&s[k], c);
        if (out[i] = (char *)malloc(clen * sizeof(char) + 1))
        {
            ((char *)memcpy(out[i], &s[k], clen))[clen] = '\0';;
            k += clen;
        }
    }
    return (out);
}

int main(int argc, char const *argv[])
{
	char	string[] = "Hello     this is a string that needs to be split";
	char **new;

	int i;
	i = 0;
	new = ft_strsplit(string, ' ');
	while (new[i])
	{
		printf("%s\n", new[i]);
		i++;
	}

	return 0;
}
