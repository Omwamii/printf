#include <stdio.h>
#include <stddef.h>
#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
*_printf - produce output according to format
*@format: string to be output
*Return: number of characters that are printed out
*/
int _printf(const char *format, ...)
{
	int i;
	int val;
	int (*f)(va_list);
	va_list args;

	i = 0;
	va_start(args, format);
	if (format[0] == '%' && format[1] == '%')
			return (-1);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] != '%')
		{
			if (format[i + 1]  == '%')
			{
				val = val + _putchar(format[i + 1]);
				i += 2;
			}
			else
			{
				f = check_specifier(format[i + 1]);
				if (f)
				{
					val += f(args);
				}
				else
				{
					val = _putchar(format[i]) + _putchar(format[i + 1]);
					i = i + 2;
				}
			}
		}
		else
		{
			val += _putchar(format[i]);
			i++;
		}
	}
	va_end(args);
	return (val);
}
