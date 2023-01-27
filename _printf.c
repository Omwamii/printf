#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
* struct print_format - Struct containing the conversion specifier and corresponding function
* @c: conversion specifier
* @func: function to handle the conversion
*/
typedef struct print_format
	{
		char c;
		void (*func)(va_list);
	} print_format_t;

int _printf(const char *format, ...)
{
	va_list args;

    	int i;
	int count;

	i = 0;
	count = 0;
    	print_format_t formats[] = {
        	{'c', print_char},
        	{'s', print_string},
        	{'%', print_percent},
        	{0, NULL}
    	};

    	va_start(args, format);
    	while (format[i])
    	{
        	if (format[i] == '%')
        	{
            	i++;
            	int j = 0;
            	while (formats[j].c)
            	{
                	if (formats[j].c == format[i])
                	{
                    	formats[j].func(args);
                    	count++;
                    	break;
                	}
                	j++;
            	}
        	}
        	else
        	{
		_putchar(format[i]);
		count++;
		}
		i++;
	}
	va_end(args);
	return count;
}

/**
* print_char - prints a single character
* @args: list of arguments
*/
void print_char(va_list args)
{
	char c = va_arg(args, int);
	_putchar(c);
}

/**
* print_string - prints a string of characters
* @args: list of arguments
*/
void print_string(va_list args)
{
	char *s = va_arg(args, char*);
	_putchar(s);
}

/**
* print_percent - prints a percent character
* @args: list of arguments (unused)
*/
void print_percent(va_list args)
{
	_putchar('%');
}
