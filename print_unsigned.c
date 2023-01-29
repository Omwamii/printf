#include "main.h"

/**
  *print_unsigned - prints unsigned integers
  *@input: variadic parameter
  *
  *Return: characters printed
  */

int print_unsigned(va_list input)
{
	int uns = va_arg(input, unsigned int);

	return (uns); /* placeholder */
}
