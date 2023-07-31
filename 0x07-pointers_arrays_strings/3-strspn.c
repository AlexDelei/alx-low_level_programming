#include "main.h"
#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s:the initial segment
 * @accept:pointer to a string
 *
 * Return:the length of string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int found;
	char *p;

	while (*s != '\0')
	{
		found = 0;

		while ((*p = *accept) && *p != '\0')
		{
			if (*s == *p)
			{
				found = 1;
				break;
			}
			if (!found)
			{
				break;
			}
			p++;
		}
		len++;
		s++;
	}

	return (len);
}
