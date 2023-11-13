#include "main.h"
/**
 *_strchr - character in a string
 *@s:string
 *@c:character to check
 *Return:null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
	{
		s++;
	}

	return ((*s == c) ? s : NULL);
}
