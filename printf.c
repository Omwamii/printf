#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
  *tobinary - converts a number to binary
  *@n: number to be converted
  *Return: binary number
  */
int tobinary(int n)
{
	int n, nsave = n, rem, d;
	int j = 1, dec = 0;

	while (n > 0)
    {
        rem = n % 10;
        d = rem * j;
        dec += d;
        j *= 2;
        n /= 10;
    }
	return (nsave);

}
/**
  *_printf - prints out any type of input
  *@format: format specified for input
  *
  *Return: characters printed
  */

int _printf(const char *format, ...)
{
	va_list input;
	int i = 1;
	int count = 0;

	va_start(input, format);
	if (format[0] == '%')
	{
		if (format[i])
		{
			switch (format[i])
			{
				case 'c':
					write(1,&(va_arg(input, char)), 1);
					return (++count);
				case 's':
					char str = va_arg(input, char*);

					while (str[count])
					{
						write(1, &str[count], 1);
						count++;
					}
					return (count);
				case 'i':
					write(1, &(va_arg(input, int)), 4);
					return (count);
				case 'd':
					write(1, &(va_arg(input, int)), 4);
					return (count);
				case 'b':
					int binary = tobinary(va_arg(input, int));
					write(1, &binary,4);
					return (count);
				case '
				default:
					break;
			}
		}

	}
}
