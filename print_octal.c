#include "main.h"

/**
  *print_octal - prints octal number
  *@input: variadic parameters
  *
  *Return: characters printed
  */

int print_octal(va_list input)
{
	int deci = va_arg(input, int);
	char octal[(sizeof(int) * 4) + 1];
	int i = 0, j = 0, rem;

	while (deci > 0)
	{
		rem = deci % 8;
		octal[i] = rem + '0';
		deci /= 8;
		i++;
	}
	octal[i] = '\0';

	for (j = i - 1; j >= 0; j--)
	{
		write(1, &octal[j], 1);
	}
	return (i);

}
