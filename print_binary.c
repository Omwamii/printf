#include "main.h"

/**
  *print_binary - prints binary from dec input
  *@input: variadic parameter
  *
  *Return: characters printed
  */

int print_binary(va_list input)
{
	signed long num = va_arg(input, signed int);
	char binary[32], temp;
	int i = 0, j = 0, val = 0;

	if (num < 0)
	{
		for (i = 0; i < 32; i++)
			binary[i] = (num & (1 << i)) ? '1' : '0';
	}
	if (num == 0)
	{
		binary[i] = '0';
		write(1, binary, 1);
		return (1);
	}
	while (num > 0)
	{
		binary[i] = (num % 2) + '0';
		num /= 2;
		i++;
	}
	val = i;
	j = i - 1;
	i = 0;

	while (j > i)
	{
		temp = binary[i];
		binary[i] = binary[j];
		binary[j] = temp;
		i++;
		j--;
	}

	return (write(1, binary, val));
}

