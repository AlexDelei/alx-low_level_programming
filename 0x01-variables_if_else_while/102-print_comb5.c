#include <stdio.h>
/**
 * main - prints "Combination of all two-digit numbers"
 * Return:Success value 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 0; i++)
	{
		for (j = 1; j <= 99; j++)
		{
			putchar('0' + i);
			putchar('0' + j);

			if (i != 0 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
