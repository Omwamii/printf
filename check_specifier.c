#include "main.h"

/**
*check_specifier - check format specifier type to be printed
*@fmt: string to be printed
*@va_list:
*Return: format specifier
*
*/
int (*check_specifier(char fmt))(va_list)
{
	int index;

	index = 0;

	func_t spec[] = {
		{"c", _char},
		{"s", _str},
		{"%", _cent},
		{NULL, NULL}
	};
	while (spec[index].t)
	{
		if (fmt == spec[index].t[0])
			return (spec[index].f);
		index++;
	}
	return (NULL);
}
