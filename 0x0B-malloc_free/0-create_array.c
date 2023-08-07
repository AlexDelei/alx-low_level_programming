#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of characters
 * @size: the size of the array
 * @c: the character
 *
 * Return: the array
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	/*Allocating memory to array*/
	s = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	/*If memory allocation fails*/
	if (s == NULL)
	{
		return (NULL);
	}

	/*Initializing it with specific character*/
	for  (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
