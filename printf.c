#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
*_printf - produce output according to format
*@format: string to be output
*Return: number of characters that are printed out
*/
int _printf(const char *format, ...)
{

	va_list args;

	char c;
	char *sval;
	char *str;

	va_start(args, format);

	for (str = format; *str; str++)
	{
		if (*str != '%')
		{
			putchar(*str);
			continue;
		}
		switch (*++str)
		{
			case 'c':
				c = va_arg(args, int)
				printf("%c", c);
				break;
			case 's':
				for (sval = va_arg(args, char *)
				putchar(*sval);
				break;
			default:
				putchar(*str);
				break;
		}
	}
	printf("\n");
	va_end(args);
}
