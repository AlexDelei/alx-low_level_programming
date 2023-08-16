#include "function_pointers.h"
#include <stdio.h>
/**
 *print - printing name
 *@name: the name
 *
 *
 */
void print(char *name)
{
	printf("%s", name);
}
/**
 *print_name - printing name
 *@name: the name
 *@f: fuction pointer
 *
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
