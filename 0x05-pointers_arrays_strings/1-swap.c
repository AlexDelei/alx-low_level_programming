#include "main.h"
/**
 * swap_int - swaps values of two variables
 * @a: pointer one
 * @b: pointer two
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
