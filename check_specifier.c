#include "main.h"

/**
  *check_specifier - checks specifier used and
  *assigns a handling func
  *@format: specifier string
  *
  *Return: ptr to the handling function or NULL if absent
  */

int (*check_specifier(const char *format))(va_list)
{
	int i;

	func_t handlers[8] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_percent},
		{'b', print_binary},
		{'i', print_signed},
		{'d', print_signed},
		{'u', print_unsigned},
		{'x', print_hexa},
		{'X', print_hexa_upper},
		{'o', print_octal},
		{'\n', print_line}
	};

	while (handlers[i].t)
	{
		if (handlers[i].t == *format)
		{
			return (handlers[i].f);
		}

		i++;
	}

	return (NULL);
}
