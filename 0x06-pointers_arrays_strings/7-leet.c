#include "main.h"
#include <stdio.h>
/**
 * *leet - encodes a string
 * @input:string to be encoded
 *
 * Return:the result
 */
char *leet(char *input)
{
	int i;

	for (i = 0; input[i] != '\0'; i++)
	{
		while (input[i] == 'a' || input[i] == 'A')
		{
			input[i] = '4';
		}
		while (input[i] == 'e' || input[i] == 'E')
		{
			input[i] = '3';
		}
		while (input[i] == 'o' || input[i] == 'O')
		{
			input[i] = '0';
		}
		while (input[i] == 't' || input[i] == 'T')
		{
			input[i] = '7';
		}
		while (input[i] == 'l' || input[i] == 'L')
		{
			input[i] = '1';
		}
	}
	return (input);
}
