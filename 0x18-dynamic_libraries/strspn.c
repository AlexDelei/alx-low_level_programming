#include "main.h"
/**
 *_strspn - calculates the length of an initial segement
 *@s:string to scan
 *@accept:set of charcters to match
 *Return:0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0' && _strchr(accept, *s++) != NULL)
	{
		count++;
	}

	return (count);
}
