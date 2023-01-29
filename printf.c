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
	int (*f)(va_list) = NULL;
	va_list args;
	char buffer[BUFF_SIZE];
	int index = 0;

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

	print_buffer(buffer, &index);
	va_end(args);
	return (count);
}

/**
  *print_buffer - prints the buffer
  *@buffer: array of characters
  *@index: buffer index
  */

void print_buffer(char buffer[], int *index)
{
	if (*index > 0)
		write(1, buffer, *index);

	*index = 0;
}
