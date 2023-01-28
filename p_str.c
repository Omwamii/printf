#include "main.h"

/**
*p_str - prints the % specifier
*@args: parameter from a variadic function
*Return: count
*/
int p_str(va_list args)
{
	char *ch;
	int count;
	int value;

	count = 0;

	ch = va_arg(args, char *);

	if (!ch)
		ch = "(null)";
	while (*ch)
	{
		value = _putchar(*ch);
		if (value == -1)
			return (-1);
		count++;
		ch++;
	}
	return (count);
}
