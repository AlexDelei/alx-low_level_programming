#include <stdio.h>
/**
 * main - prints "numbers of base 10 using putchar"
 * Return:Success value 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		putchar('\n');
	}
	return (0);
}
