#include <stdio.h>
/**
 * main - prints "Hexadecimal values"
 * Return:Success value 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchar('0' + i);
		}
		else
		{
			putchar('a' + (i - 10));
		}
	}
	putchar('\n');
	return (0);
}
