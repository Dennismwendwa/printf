
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

#include "main.h"

/**
  * functionformat - function that checks the format of the args.
  * @format:- commandline args
  * Return:- Always 0 (success)
  */

void functionformat(char *format, ...)
{
	va_list ap;
	int i = 0;
	int j = 0;

	char *str;

	va_start(ap, format);

	while (format[i] && format)
		i++;

	while (format[j] && format)
	{
		switch (format[j])
		{
			case 'c':
				_putchar('%c%s', var_arg(format));
				break;

			case 's':
				_putchar('%c%s', var_arg(format));
				break;

			case '%':
				_putchar('%c%d', var_arg(format));
				break;
		}
		j++;

	}
	va_end(ap);
}
