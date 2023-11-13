#include "main.h"
/**
 *_memset - memset
 *@s:string s
 *@b:string b
 *@n:size
 *Return:result
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n-- > 0)
	{
		*s++ = b;
	}

	return (s);
}
