#include "main.h"

/**
*check_specifier - check format specifier type to be printed
*@fmt: string to be printed
*@va_list:
*Return: format specifier
*
*/
int (*check_specifier(const char *fmt))(va_list)
{
	int index;

	func_t spec[] = {
		{"c", p_char},
		{"s", p_str},
		{"d", print_signed},
		{"i", print_signed},
		{"b", print_binary},
		{"x", print_hexa},
		{"o", print_octal},
		{"X", print_hexa_upper},
		{"u", print_unsigned},
		{NULL, NULL}
	};
	for (index = 0; spec[index].t; index++)
	{
		if (*fmt == spec[index].t[0])
			return (spec[index].f);
	}
	return (NULL);
}
