#include "main.h"
/**
 * _isalpha - Checks for uppercase character
 * @c:character to be checked
 *
 * Return:1 if character is uppercase and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
