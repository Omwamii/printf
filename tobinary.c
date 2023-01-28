#include "main.h"

/**
  *tobinary - converts number to binary
  *@input: variadic parameter passed
  *
  *Return: array of integers
  */
int *tobinary(va_list input)
{
	unsigned int in = va_arg(input, unsigned int);
	int *bin, i = 0; num = in;

	while (num > 0)
	{
		bin[i] = malloc(sizeof(int));
		bin[i] = (num % 2);
		num /= 2;
		i++;
	}

	return (bin);
}
