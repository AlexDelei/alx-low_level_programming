#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatinates two strings stored in the memory
 * @s1: the first string
 * @s2: the second string
 *
 * Return: NULL if fail
 */
char *str_concat(char *s1, char *s2)
{
	char *res;
	size_t ln1;
	size_t ln2;

	/*Null inputs*/
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	/*calculating the length of the srings*/
	ln1 = strlen(s1);
	ln2 = strlen(s2);

	/*Allocating memory*/
	res = (char *)malloc((ln1 + ln2 + 1) * sizeof(char));

	/*If memory fails return */
	if (res == NULL)
	{
		return (NULL);
	}

	/*copying s1 and s2 to mem*/
	strcpy(res, s1);
	strcat(res, s2);

	return (res);
}
