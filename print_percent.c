#include "main.h"

/**
  *print_pc - prints the percentage sign
  *@input: variadic param
  *
  *Return: characters printed
  */

int print_percent(va_list input)
{
	char p = '%';
	int count = 0;
	if (p)
	{
		count = write(1, &p, 1);
	}

	return (count);
}
