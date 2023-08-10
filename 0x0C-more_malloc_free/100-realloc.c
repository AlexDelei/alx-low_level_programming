#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocates memory
 * @ptr: pointer to memory
 * @old_size: old memory size
 * @new_size: new mem size
 *
 * Return: ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	ptr = realloc(ptr, new_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < new_size; i++)
	{
		*ptr(i + 1) = new_size + 1;
	}
	if (new_size == 0)
	{
		free(ptr);
	}
	return (NULL);
}
