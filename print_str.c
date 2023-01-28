#include "main.h"

/**
  *print_str - prints a string
  *@input: variadic parameter
  *
  *Return: number of string characters printed
  */

int print_str(va_list input)
{
	char *str = va_arg(input, char*);
	int count= 0;

	if(str == NULL)
		return (-1);
	while (str[count] != '\0')
	{
		write(1, &str[count], 1);
		count++;
	}

	return (count);
}
