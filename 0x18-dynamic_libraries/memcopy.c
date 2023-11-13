#include "main.h"
/**
 *_memcpy - copies the memory allocated
 *@dest:copy to
 *@src:copy from
 *@n:size
 *Return:result
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n-- > 0)
	{
		*dest++ = *src++;
	}

	return (dest);
}
