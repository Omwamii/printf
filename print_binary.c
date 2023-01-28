#include "main.h"

/**
  *print_binary - prints binary from dec input
  *@input: variadic parameter
  *
  *Return: characters printed
  */

int print_binary(va_list input)
{
	int num = va_arg(input, unsigned int);
	int *binary, i = 0;

	if (num)
	{
		binary = tobinary(num);

		while(binary[i] != '\0')
		{
			write(1, &binary[i], 1);
			i++;
		}

		return (i);
	}

	return (-1);
}

