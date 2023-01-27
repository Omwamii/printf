#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
  *_printf - prints out any type of input
  *@format: format specified for input
  *
  *Return: characters printed
  */

int _printf(const char *format, ...)
{
	va_list input;
	int i = 0, count = 0;
	char ch;
	char *str;

	va_start(input, format);

	if (format)
	{
		while (format[i] != '%' && format[i] != '\0')
		{
			write(1, &format[i], 1);
			i++;
		}
		i++;
		switch (format[i])
		{
			case 'c':
				 ch = va_arg(input, int);
				write(1, &ch, 1);
				return (++count);
			case 's':
				str = va_arg(input, char*);
				while (str[count] != '\0')
				{
					write(1, &str[count], 1);
					count++;
				}
				return (count);
			default:
				break;
		}
	}
	va_end(input);

	return (0);
}
