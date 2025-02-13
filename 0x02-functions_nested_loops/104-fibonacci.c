#include <stdio.h>
/**
 * fibonacci - Printing out fibonacci numbers
 * Return: the fibonacci numbers within a given range
 */

int fibonacci(void)
{
    int cnt;
    unsigned long a, b, temp;
    
    int limit = 98;

    a = 1;
    b = 2;
    cnt = 0;
    while (cnt < limit)
    {
        if (cnt == 0)
        {
            printf("%lu, ", a);
        }
        else if (cnt == 1)
        {
            printf("%lu", b);
        }
        else
        {
            temp = a + b;
            a = b;
            b = temp;

            printf(", %lu", temp);
        }
        cnt++;
    }
    printf("\n");
    return (0);
}

/**
 * main - calls the function
 * Return: Success value 0
 */

int main(void)
{
    fibonacci();
    return (0);
}
