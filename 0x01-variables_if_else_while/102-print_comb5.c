#include <stdio.h>
/**
 * main - prints "Combination of all two-digit numbers"
 * Return:Success value 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		int FDT = i / 10;
		int SDT = i % 10;

		for (j = i; j <= 99; i++)
		{
			int FDT2 = j / 10;
			int SDT2 = j % 10;

			putchar('0' + FDT);
			putchar('0' + SDT);
			putchar(' ');
			putchar('0' + FDT2);
			putchar('0' + SDT2);

			if (i != 99 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
