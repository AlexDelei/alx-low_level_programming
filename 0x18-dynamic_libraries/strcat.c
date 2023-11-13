#include "main.h"
/**
 *_strcat - concatinater
 *@dest:concatinate with
 *@src:concatinate with
 *Return:result
 */
char *_strcat(char *dest, char *src)
{
	char *original_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	for (; (*dest = *src); dest++, src++)
	{
	}

	return (original_dest);
}
