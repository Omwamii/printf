#include "main.h"

/**
  *print_line - prints newline
  *args: variadic parameter
  *
  *Return: 0 if success
  */

int print_line(va_list args)
{
	char n = (char)va_arg(args, int);

	if (n == '\n')
	{
		write(1, &n, 1);
		return (1);
	}
}
