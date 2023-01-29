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
	char digits[32];
	int i = 0;

	if (digit == 0)
	{
		digits[0] = '0';
		_putchar(digits[0]);
		return (1);
	}

	tostring(digit, digits);

	while (digits[i] != '\0')
	{
		_putchar(digits[i]);
		i++;
	}

	return (i);

}
