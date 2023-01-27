#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
*_char - prints a char
*@args: parameter from a variadic function
*Return: char specifier in index
*/
int _char(va_list args)
{
	char ch;
	int index;

	index = 0;

	ch = (char)va_arg(args, int);

	if (ch)
	{
		write(1, &ch, 1);
		return (index);
	}
	return (0);
}
