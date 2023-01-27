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
	char newline = '\n', ch, *str;
	signed int dec, deci;

	va_start(input, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
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
				case '\n':
					write(1, &newline, 1);
					break;
				case 'i':
					dec = va_arg(input, signed int);
					write(1, &dec, sizeof(dec));
					break;
				case 'd':
					deci = va_arg(input, signed int);
					write(1, &deci, sizeof(deci));
					break;
				default:
					break;
			}
			i++;
		}

		else
		{
			write(1, &format[i], 1);
			i++;
		}
	}
	va_end(input);
	return (count);
}

/**
  *main - entry point check
  */

int main(void)
{
	signed int c = -21;

	_printf("%d\n", c);
	_printf("The teacher said %i should see him today\n", c);

	return (0);
}
