#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

int _printf(const char *format, ...);
int (*check_specifier(char fmt))(va_list);
int _putchar(char);
/**
*struct func - struct to print specifier
*@t: character to compare
*@f: function to print
*/

typedef struct func
{
	char *t;
	int (*f)(va_list);
} func_t;

int _cent(va_list);
int _char(va_list);
int _str(va_list);
#endif
