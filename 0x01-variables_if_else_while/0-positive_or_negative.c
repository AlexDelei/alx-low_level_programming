#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints "n as a positive or zero or a negative number"
 * @n:Holds the stored random number
 * Return:Success value (0)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
