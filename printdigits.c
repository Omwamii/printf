#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
  *_printf - prints digits (handling)
  **@format: specified data types
  */

void _printf(const char *format, ...)
{
	va_list nums;
	int i = 1;

	va_start(nums, format);
	if (format[0] == '%')
	{
		switch (format[i])
		{
			case 'i':
				write(1, &(va_arg(nums, int)), 4);
				break;
			case 'd':
				write(1, &(va_arg(nums, int)), 4);
				break;
		}
	}
}
