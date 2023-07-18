#include "main.h"
/**
 * _abs - Absolute value
 * @x:the value to be checked
 *
 * Return:absolute value and value
 */
int _abs(int x)
{
	if (x < 0)
	{
		int abs_val;

		abs_val = x * -1;
		return (abs_val);
	}
	return (x);
}
