#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
*_str- prints a string
*@args: parameter from a variadic function
*Return: value of string
*/
int _str(va_list args)
{
	char *ch;
	int index;
	int count;

	index = 0;

	ch = va_arg(args, char*);

	if (ch == NULL)
		ch = "(null)";
	while (ch[index] != '\0')
	{
		write(1, &ch[index], 1);
		index++;
		count++;
	}
	return (count);
}
