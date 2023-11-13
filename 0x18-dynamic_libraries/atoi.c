#include "main.h"
/**
 *_atoi - converts int to str and vice versa
 *@s:string
 *Return:0
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s == ' ' || (*s >= '\t' && *s <= '\r'))
	{
		s++;
	}

	if (*s == '-' || *s == '+')
	{
		sign = (*s++ == '-') ? -1 : 1;
	}

	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s++ - '0');
	}

	return (sign * result);
}
