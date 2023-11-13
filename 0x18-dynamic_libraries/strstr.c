#include "main.h"
/**
 *_strstr - searches for first occurence of a substring
 *@haystack:string to be searched
 *@needle:the substring to search for in the haystack
 *Return: null
 */
char *_strstr(char *haystack, char *needle)
{
	while (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		char *n = needle;
		char *h = haystack;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
