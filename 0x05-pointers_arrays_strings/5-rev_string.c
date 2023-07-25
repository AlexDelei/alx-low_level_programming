#include "main.h"
#include <stdio.h>
/**
 * rev_string - function for reversing the string
 * @s: the string
 *
 */
void rev_string(char *s)
{
	char aux;
	int n = 0;
	int i = 0;

	while (s[n] != '\0')
		n++;
	for (--n; n > i; n--)
	{
		aux = s[i];
		s[i] = s[n];
		s[n] = aux;
		i++;
	}
}
