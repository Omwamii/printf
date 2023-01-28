#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

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

int _putchar(char);
int _printf(const char *format, ...);
int (*check_specifier(const char *fmt))(va_list);
int p_cent(va_list args);
int p_char(va_list args);
int p_str(va_list args);
#endif
