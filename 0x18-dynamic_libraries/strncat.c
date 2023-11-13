#include "main.h"
/**
 *_strncat - strncats
 *@dest:to
 *@src:from
 *@n:size
 *Return:result
 */
char *_strncat(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	for (; n-- > 0 && (*dest = *src); dest++, src++)
	{
	}
	*dest = '\0';

	return (original_dest);
}
