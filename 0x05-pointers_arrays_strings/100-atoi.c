#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string
 *
 * Return: The converted string
 */
int _atoi(char *s)
{
	int sign = 1; /*Initializing the sign to positive by default*/
	int result = 0;

	/*Step 1: Handling whitespace characters*/
	while (*s == ' ')
	{
		s++;
	}

	/*Step 2: Handling the sign*/
	while (*s == '+' || *s == '-')
	{
		if (*s == '-')
		{
			/*sign *= -1 ;*//* Change the sign if a '-' is encountered*/
		}
		s++;
	}

	/*Step 3: Converting the sequence of digits to an integer*/
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');/*Update the result*/
		s++;
	}

	/*Step 4: Return the resulting integer with the correct sign*/
	return (result * sign);
}
