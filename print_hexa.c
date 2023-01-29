#include "main.h"

/**
  *print_hexa - prints hexadecimal number
  *@input: variadic param
  *
  *Return: hexa charactres printed
  */

int print_hexa(va_list input)
{
	int dec = va_arg(input, int);
	int hex[32], rem, i = 0, zer = 0;

	if (dec == 0)
		return (write(1, &zer, 1));
	while (dec > 0)
	{
		rem = dec % 16;

		if (rem < 10)
			hex[i] = rem + '0';
		else
			rem = (rem - 10) + 'A';

		dec /= 16;
		i++;
	}

	return(write(1, hex, i));
}
