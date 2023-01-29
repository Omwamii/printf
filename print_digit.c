#include "main.h"

/**
  *print_signed - prints digit to stdout
  *@input: variadic parameters
  *
  *Return: number of int characters printed
  */

int print_signed(va_list input)
{
	signed int digit = va_arg(input, signed int);
	char *digits = malloc(sizeof(countnum(digit)));
	int i = 0;

	if (digits)
	{
		tostring(digit, digits);

		while (digits[i] != '\0')
		{
			write(1, &digits[i], 1);
			i++;
		}

		return (i);
	}

	return (0);
}
