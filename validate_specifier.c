#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
  *check_specifier - checks specifier used and
  *assigns a handling func
  *@format: specifier string
  *
  *Return: ptr to the handling function or NULL if absent
  */

int *(check_specifier(char *format))(va_list)
{
	int i;

	funct_t handlers[4] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_percent},
		{'\n', print_newline},
		{NULL, NULL}
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
