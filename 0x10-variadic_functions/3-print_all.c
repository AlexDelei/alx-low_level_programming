#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints any arguement
 * @format: data type format
 *
 *
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char c_arg;
	int i_arg;
	double f_arg;
	char *s_arg;
	va_list ap;

	va_start(ap, format);
	while (format && format[i])
	{
		if (i != 0 && format[i - 1] != ',' && format[i] != ',')
		{
			printf(", ");
		}
		switch (format[i])
		{
			case 'c':
				c_arg = (char)va_arg(ap, int);
				printf("%c", c_arg);
				break;

			case 'i':
				i_arg = va_arg(ap, int);
				printf("%d", i_arg);
				break;

			case 'f':
				f_arg = va_arg(ap, double);
				printf("%f", f_arg);
				break;

			case 's':
				s_arg = va_arg(ap, char*);
				if (s_arg == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", s_arg);
					break;
				}
			default:
				break;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
