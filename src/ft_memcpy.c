#include <string.h>

// btw sry if i dont answer directly kinda distracted with stuff left and right
// to be expected while movind ;)
//my fucking dinner needs to hurry up, starving over here

void	*memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		((char *)dest)[i] = ((char *)src)[i];
	return (dest); //jesus how did I miss that
}

/*
Yup looks good!
Keep in mind where u place the ++

++i = Increrment i first then use it
i++ = Use i, after that increment it
ah oke, so in this case you'd want the ++i so it increments to 0 first right?
yes, thanks didn't know that one yet
*/
