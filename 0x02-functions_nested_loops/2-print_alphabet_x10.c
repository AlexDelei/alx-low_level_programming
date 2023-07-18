#include "main.h"
/**
 *print_alphabet - Makes the lowercase alphabets
 *
 * Return:Always 0
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 10;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		
		_putchar('\n');

		i++;
	}
}
