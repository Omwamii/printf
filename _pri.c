#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
*_printf - prints a string in format
*@format: first argument
*@...: variable list of arguments
*Return: args
*
*/
int _printf(const char *format, ...)
{
	va_list args;

	int i;
	int j;
	int count;

	i = 0;
	j = 0;
	count = 0;
	print_format_t formats[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{0, NULL}
	};

	va_start(args, format);
	while (format[i]);
	{
		if (format[i] == '%')
		{
			i++;
			while (formats[j].c)
			{
				if  (formats[j].c == format[i])
				{
					formats[j].func(args);
					count++;
					break;
				}
				j++;
			}
		}
		else
		[
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
/**
*print_char - prints a single character
*@args: list of arguments
*
*Return: always 0
*/
void print_char(va_list args)
{
	char c = va_arg(args, int);
	_putchar(s);
}
/**
*print_string - prints a string of characters
*@args: list of arguments
*Return: a string
*
*/
void print_string(va_list args)
{
	char *s = va_arg(args, char *);
	_putchar(s);
}
/**
*print_percent - prints a percent character
*@args: list of arguments
*Return: nun
*
*/
void print_percent(va_list args)
{
	_putchar('%');
}





