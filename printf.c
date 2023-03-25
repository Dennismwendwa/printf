
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

#include "main.h"

/**
  * _printf - function that produces output according to a format.
  * @format:- Commandline args strings, numbers, char.
  * Return:- Always 0 (success)
  */

int _printf(const char *format, ...)
{
	va_list ap;

	int i;
	int k;
	char c;
	int numbers;

	va_start(ap, format);

	for (i = 0; i < n; i++)
	{
	
		for (k = 0; k <= 9; k++)
			numbers = i;

		for (k = 'a'; k <= 'z'; k++)
			c = k;
	}
	va_end(ap);
}
