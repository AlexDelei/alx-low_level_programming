#include <stdio.h>
/**
 * main - prints "Combination of all two-digit numbers"
 * Return:Success value 0
 */
int main(void)
{
	int i, j;
	int LCT = 98 * 100 + 99

	for (i = 0; i <= 99; i++)
	{
		int FDT = i / 10;
		int SDT = i % 10;

		for (j = i + 1; j <= 99; j++)
		{
			int FDT2 = j / 10;
			int SDT2 = j % 10;

			putchar('0' + FDT);
			putchar('0' + SDT);
			putchar(' ');
			putchar('0' + FDT2);
			putchar('0' + SDT2);

			if (i * 100 + j != LCT)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
