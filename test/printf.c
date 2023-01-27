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

<<<<<<< HEAD
	va_start(input, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
=======
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
>>>>>>> 5583835c81fa47e039bd11b5c6b1f6a07e2cf19d
			i++;
			switch (format[i])
			{
				case 'c':
					ch = va_arg(input, int);

					write(1, &ch, 1);
					count = 1;
					break;
				case 's':
					str = va_arg(input, char*);

					while (str[count] != '\0')
					{
						write(1, &str[count], 1);
						count++;
					}
					break;
				default:
					break;
			}
		}
<<<<<<< HEAD

		write(1, &format[i], 1);
		i++;
	}
	va_end(input);
	return (count);
=======
	}
	va_end(args);
	return (val);
>>>>>>> 5583835c81fa47e039bd11b5c6b1f6a07e2cf19d
}
