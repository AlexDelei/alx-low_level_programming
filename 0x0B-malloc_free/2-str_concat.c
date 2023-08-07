#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatinates two strings stored in the memory
 * @s1: the first string
 * @s2: the second string
 *
 * Return: NULL if failed
 */
char *str_concat(char *s1, char *s2)
{
	int n;
	char *s;
	int i;
	int j;

	/*calculating size of both strings*/
	n = 0;
	while (s1[n] != '\0' && s2[n] != '\0')
	{
		n++;
	}

	/*Allocating memory*/
	s = (char *)calloc(2 * n + 1, sizeof(char));

	/*If memory is null*/
	if (s == NULL)
	{
		return (NULL);
	}

	/*moving to end of string s1*/
	for (i = 0; i < n && s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}

	/*Joining the two*/
	for (j = 0; j < n && s2[i] != '\0'; j++)
	{
		s[i + j] = s2[j];
	}
	/*Adding the null terminator*/
	s[i + j] = '\0';

	return (s);
}
