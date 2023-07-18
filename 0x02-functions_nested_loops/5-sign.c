#include "main.h"
/**
 * print_sign - Checks if n is positive ,negative or zero
 * @n:the number to be checked
 *
 * _putchar - the sign to be printed
 *
 * Return:1 for positive 0 for zero -1 for negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
