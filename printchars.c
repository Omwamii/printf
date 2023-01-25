#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
  *_printf - prints any characters and string
  *@format: formats allowed for printing
  *
  *Return: number of characters printed
  */

int _printf(const char *format, ...)
{
	va_list chars;
	int i = 0;
	int count = 0;

	va_start(chars, format);
	if (format[0] == '%')
	{
		if (format[i])
		{
			i++;

			switch (format[i])
			{
				case 'c':
					write(1, &(va_arg(chars, char)), 1);
					return (++count);
				case 's':
					char str = va_arg(chars, char*);

					while (str[count])
					{
						write(1, str, 1);
						count++;
					}
					return (count);
				default:
					break;
			}
		}
	}
	va_end(chars);
}
