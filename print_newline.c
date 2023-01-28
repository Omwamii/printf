#include "main.h"

/**
  *print_line - prints newline
  *args: variadic parameter
  *
  *Return: nothing
  */

void print_line(va_list args)
{
	char n = '\n';

	if (n)
	{
		write(1, &n, 1);
	}
}
