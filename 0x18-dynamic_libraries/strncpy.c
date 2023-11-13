#include "main.h"
/**
 *_strncpy - copies a string
 *@dest:copy to
 *@src:copy from
 *@n:size
 *Return:the result
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *original_dest = dest;

	for (; n > 0 && (*dest = *src); dest++, src++, n--)
	{
	}
	for (; n > 0; dest++, n--)
	{
		*dest = '\0';
	}
	return (original_dest);
}
