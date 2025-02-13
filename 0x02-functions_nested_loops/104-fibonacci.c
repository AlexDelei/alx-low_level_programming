#include <stdio.h>
/**
 * main - Printing out fibonacci numbers
 * Return: the fibonacci numbers within a given range
 */

int fibonacci(void)
{
    int cnt;
    int a, b, temp;
    
    int limit = 98;

    a = 1;
    b = 2;
    cnt = 0;
    while (cnt < limit)
    {
        if (cnt == 0)
        {
            printf("%d, ", a);
        }
        else if (cnt == 1)
        {
            printf("%d", b);
        }
        else
        {
            temp = a + b;
            a = b;
            b = temp;

            printf(", %d", temp);
        }
        cnt++;
    }
    printf("\n");
    return (0);
}

int main(void)
{
    fibonacci();
    return (0);
}
