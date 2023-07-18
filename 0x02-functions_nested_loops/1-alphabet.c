#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Return:Success value 0
 * print_alphabet - function
 */
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
