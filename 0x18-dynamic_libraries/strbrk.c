#include "main.h"
/**
 *_strpbrk - searche for specified character
 *@s:string to search
 *@accept:the character to search
 *Return:null
 */
char *_strpbrk(char *s, char *accept)
{
	
	while (*s != '\0' && _strchr(accept, *s) != NULL)
	{
		s++;
	}

	return ((*s == '\0') ? NULL : s);
}
