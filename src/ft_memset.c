#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	
	i = -1;
	while (++i < n)
		((char *)str)[i] = c;
	return (str);
}

/*
 Multi line comments!!!

 this makes me a bit aroused to be honest
 I mean it doesn't make it less readable like this imo

 can you change the parsec resolution to like 2440, i can barely see shit
 xdddddd oh sure bro, forgot im currently on an ultra wide 1440 screen
 yeah once i have my pc i have my 1440 p monitor as well
 But do you have a 4k screen as well *smugface* I dont have the money

 anyway do u get it ? Oh yeah I totally get this now. Casting was just a bit of an abstract thought for me before this. Okay how the fuck do you change screen resolution for other people on parsac?
 go to the settings, host , and then screen resolution

 Perfect! i can read now. Now I need to change some stuff, because it changed it for me too xD
 Yeah its only for the current stream, i think once im gone it goes back to normal
 ah it's fine for now
 Okay on to memcpy
*/

		// So we have void* and we can modify it.
		// So void is fucked, we need to know the exact type!
		// In memory we know where this pointer is pointing at
		// 00 00 00 00 00 00 00
		// * ------------ 

		// We dk how long str actually is with a generic void* right ?yea
		// Thats what n is for, it tells us "this type is n amount of bytes big"
		// But doesnt n tell us for how many bytes we want to change it? yeah pretty much but its commonly used to initilize say a
		// int array to a certain value, n just says "from this pointer on modify n amount of bytes and set their value to c"
		// ah, so we just need to specify the type want (cast it to a char) and then iterate it till n? yes
		// so now we can basically do this
		// Se now it works
		// wait do you need to cast it everytime you call it?ye thats up to you, its not expensive dw