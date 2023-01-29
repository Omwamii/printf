#include "main.h"

/**
  *print_unsigned - prints unsigned integers
  *@input: variadic parameter
  *
  *Return: characters printed
  */

int print_unsigned(va_list input)
{
	unsigned int digit = va_arg(input, unsigned int);
	char digits[32];
	int i = 0;

	tostring2(digit, digits);

	while (digits[i] != '\0')
	{
		_putchar(digits[i]);
		i++;
	}

	return (i);
}
