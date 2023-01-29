#include "main.h"

/**
  *print_hexa_upper - prints hexa in uppercase
  *@input: variadic parameter
  *
  *Return: printed characters
  */

int print_hexa_upper(va_list input)
{
	unsigned int dec = va_arg(input, unsigned int);
	char hex[32];
	int rem, i = 0, j = 0;

	while (dec > 0)
	{
		rem = dec % 16;

		if (rem < 10)
			hex[i] = rem + '0';
		else
			hex[i] = (rem - 10) + 'A';

		dec /= 16;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
		write(1, &hex[j], 1);

	return (i);
}
