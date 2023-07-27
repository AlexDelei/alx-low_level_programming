#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 **cap_string - Capitalizez the first letter in a word
 *@str:Pointer to the string
 *
 */
char* cap_string(char* str)
{
	int capitalize_next = 1;
	char* ptr = str;

	while (*ptr)
	{
		if (isspace(*ptr) || *ptr == ',' || *ptr == ';' || *ptr == '.' || *ptr == '!' || *ptr == '?' ||
*ptr == '"' || *ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}')
		{
			capitalize_next = 1;
		}
		else if (capitalize_next)
		{
			*ptr = toupper(*ptr);
			capitalize_next = 0;
		}
		else
		{
			*ptr = tolower(*ptr); /* Change this line to tolower instead of toupper*/
		}
	ptr++;
	}

	return str;
}
