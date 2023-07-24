#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_rev - prints in reverse
 * @s: the string
 *
 */
void print_rev(char *s)
{
	if (s == NULL)
	{
		return;
	}
	while (*s != '\0')
	{
		putchar(*s);
		s--;
	}
}
