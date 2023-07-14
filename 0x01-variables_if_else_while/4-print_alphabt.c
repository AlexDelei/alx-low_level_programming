#include <stdio.h>
/**
 * main - prints "all lowercase alphabets except q and e"
 * Return:Always 0
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');

	return (0);
}
