#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
*p_char - prints a char
*@args: parameter from a variadic function
*Return: char specifier in index
*/
int p_char(va_list args)
{
	char ch;
	int index;
	int value;

	index = 0;

	ch = va_arg(args, int);

	value = _putchar(ch);

	if (value == -1)
		return (index);

	index++;

	return (index);
}
