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
int p_char(va_list args);
int p_str(va_list args);
int countnum(int num);
int print_binary(va_list input);
int print_signed(va_list input);
int print_octal(va_list input);
int print_hexa(va_list input);
int print_hexa_upper(va_list input);
int print_unsigned(va_list input);
char *tostring(int num, char *str);
#endif
