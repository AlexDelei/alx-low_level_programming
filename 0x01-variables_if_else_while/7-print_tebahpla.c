#include <stdio.h>
/**
 * main - prints "Lowercase alphabets from the last letter"
 * Return:Success value 0
 */
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
