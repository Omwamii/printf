#include "main.h"
/**
  *to_octal - convert decimal to octal
  *@num: decimal number to convert
  *
  *Return: octal equivalent
  */

int to_octal(int num)
{
	int deci = num, i = 0, temp, j = 0;
	int *octal;

	while (deci > 0)
	{
		octal = malloc(sizeof(int));
		octal[i] = (num % 8);
		deci /= 8;
		i++;
		octal++; /* possible issue: this may end up passing last index */
	}
	j = i - 1;
	i = 0;

	while (j > i)
	{
		temp = octal[i];
		octal[i] = octal[j];
		octal[j] = temp;
		i++;
		j--;
	}


	return (octal);
}
/**
  *print_octal - prints octal number
  *@input: variadic parameters
  *
  *Return: characters printed
  */

int print_octal(va_list input)
{
	int deci = va_arg(input, int);
	int *oct, written = 0, i = 0;

	if (deci > 7)
	{
		oct = to_octal(deci);

		while (oct[i] != '\0')
		{
			written += write(1, &oct[i], 1);
			i++;
		}
		return (written);
	}

	return (write (1, &deci, 1));

}
