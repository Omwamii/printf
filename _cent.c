#include "main.h"

/**
*_cent - prints the % specifier
*@args: parameter from a variadic function
*Return: percent sign
*/
int _cent(va_list args)
{
	char *ch;

	ch = "%";
	if (va_arg(args, int) == *ch)
	{
		return (*ch);
	}
	return (*ch);
}
