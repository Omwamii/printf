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

	int i;
	int val;
	int index;

	i = 0;
	val = 0;
	index = 0;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	while (format[i])
	{
		if (format[i] != '%')
		{
			val = write(1, &format[i],1);
			index = index + val;
			i++;
			continue;
		}
		if (format[i] == '%')
		{
		switch (format[i])
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
