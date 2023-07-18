#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n:the number provided
 *
 * Return:Value of the last digit
 */
int print_last_digit(int n)
{
	int ldt;

	ldt = n % 10;

	if (ldt < 0)
	{
		ldt = ldt * -1;
	}
	_putchar(ldt + '0');
	return (ldt);
}
