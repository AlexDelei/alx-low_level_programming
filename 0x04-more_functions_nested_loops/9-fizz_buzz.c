#include <stdio.h>
/**
 *main - prints 1 to 100 with multiples of 3 and 5 in words
 *@i:loop
 *Return:always 0
 */
int main(void)
{
	int i;

	while (i <= 100)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		i++;
		printf("%d ", i);
	}
	return (0);
}
