#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - Lowercase alphabets
 *
 * Return: Void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
