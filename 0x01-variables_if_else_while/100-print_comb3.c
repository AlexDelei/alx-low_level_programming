#include <stdio.h>
/**
 * main - prints "Combination of two numbers"
 * Return:Success value 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 8; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			putchar('0' + i);
			putchar('0' + j);

			if (j < 8 || i < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
