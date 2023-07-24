#include "main.h"
#include <stdio.h>
/**
 * rev_string - function for reversing the string
 * @s: the string
 *
 */
void rev_string(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		rev_string(s + 1);
		putchar((*s));
	}
}
