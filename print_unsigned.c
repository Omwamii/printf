#include "main.h"

/**
  *print_unsigned - prints unsigned integers
  *@input: variadic parameter
  *
  *Return: characters printed
  */

int print_unsigned(va_list input)
{
	unsigned int uns = va_arg(input, unsigned int);
	char num[32];
	int i = 0;

	if (uns == 0)
	{
		num[0] = '0';
		write(1, &num[0], 1);
		return (1);
	}

	if (uns != 0)
	{
		tostring(uns, num);

		while (num[i] !='\0')
		{
			write(1, &num[i], 1);
			i++;
		}

		return (i);
	}

	return (0);
}
