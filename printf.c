#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/**
  *countnum - counts number characters printed
  *@n: number parameter
  *Return: number of characters printed
  */

int countnum(int n)
{
	int nsave = n;
	int count = 0;

	while(nsave)
	{
		nsave /= 10;
		count++;
	}
	return (count);
}

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
	char buffer[1024];

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
					int deci = va_arg(input, int);
					write(1, &deci, 4);
					return (countnum(deci));
				case 'd':
					signed int dec = va_arg(input, signed int);
					write(1, &dec, 4);
					return (countnum(dec));
				case 'b':
					int binary = tobinary(va_arg(input, int));
					write(1, &binary,4);
					return (countnum(binary));
				case 'u':
					unsigned int uns = va_arg(input, unsigned int);
					write(1, &uns, 4);
					return (countnum(uns));
				case 'x':
					unsigned int hex = va_arg(input, unsigned int);
					write(1, &hex, 4);
					return (countnum(hex));
				case 'o':
					unsigned int oct = va_arg(input, unsigned int);
					write(1, &oct, 4);
					return (countnum(oct));
				case 'X':
					unsigned int hexa = va_arg(input, unsigned int);
					write(1, &hexa, 4);
					return (countnum(hexa));
				default:
					break;
			}
		}

	}
	va_end(input);
}
