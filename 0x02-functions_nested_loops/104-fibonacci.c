#include <stdio.h>
/**
 *fibonacci_sequence - This function will generate and print fibonacci numbers
 *@a:stores the first last number
 *@b:stores the last last number
 *
 *main - we call the fibonacci_sequence
 */
void fibonacci_sequence(int limit)
{
	int a = 1, b = 2;
	int count;
	int temp;

	while (count < limit)
	{
		if (count < limit - 1)
		{
			printf("%d, ", a);
		}
		else
		{
			printf("%d\n", a);
		}

		temp = b;
		b = a + b;
		a = temp;
		count++;
	}
}
int main(void)
{
	fibonacci_sequence(98);
	return (0);
}
