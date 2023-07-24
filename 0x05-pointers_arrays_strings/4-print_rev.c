#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints in reverse
 * @s: the string
 *
 */
void print_rev(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		print_rev(s + 1);
		putchar(*s);
	}

	putchar('\n');
}
