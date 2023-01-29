#include "main.h"

/**
*_printf - produce output according to format
*@format: string to be output
*...: other variables
*Return: number of characters that are printed out
 */
int _printf(const char *format, ...)
{
	int count;
	int (*f)(va_list);
	va_list args;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1) != '%')
		{
			format++;
			f = check_specifier(format);
			if (*(format) == '\0')
				return (-1);

			if (f == NULL)
			{
				_putchar(*(format - 1));
				_putchar(*(format));
				count += 2;
			}
			else
			{
				count += f(args);
			}
		}
		else if (*format == '%' && *(format + 1) == '%')
		{
			format++;
			_putchar('%');
			count++;
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
