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
	char t;
	int (*f)(va_list);
} func_t;

int _putchar(char);
int _printf(const char *format, ...);
int (*check_specifier(const char *format))(va_list);
int print_percent(va_list);
int print_char(va_list);
int print_str(va_list);
int *tobinary(unsigned int dec);
int countnum(int num);
int print_signed(va_list);
char *tostring(int num, char *str);
int print_line(va_list args);
int print_binary(va_list input);
#endif
