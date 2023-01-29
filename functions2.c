#include "main.h"

/**
*print_unsigned - unsigned number
*@types: rguments
*@buffer: handle print
*@flags: active flags
*@width: width
*@precision: specification
*@size: Size
*Return: char printed.
*/
int print_unsigned(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	int l = BUFF_SIZE - 2;
	unsigned long int num = va_arg(types, unsigned long int);

	num = convert_size_unsgnd(num, size);

	if (num == 0)
		buffer[l--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';

	while (num > 0)
	{
		buffer[l--] = (num % 10) + '0';
		num /= 10;
	}

	l++;

	return (write_unsgnd(0, l, buffer, flags, width, precision, size));
}

/**
*print_octal - octal notation
*@types: arguments
*@buffer: handle print
*@flags: active flags
*@width: width
*@precision: Precision
*@size: Size
*Return: char printed
*/
int print_octal(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{

	int l = BUFF_SIZE - 2;
	unsigned long int num = va_arg(types, unsigned long int);
	unsigned long int init_num = num;

	UNUSED(width);

	num = convert_size_unsgnd(num, size);

	if (num == 0)
		buffer[l--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';

	while (num > 0)
	{
		buffer[l--] = (num % 8) + '0';
		num /= 8;
	}

	if (flags & F_HASH && init_num != 0)
		buffer[l--] = '0';

	l++;

	return (write_unsgnd(0, l, buffer, flags, width, precision, size));
}

/**
*print_hexadecimal - hexadecimal notation
*@types: arguments
*@buffer: handle print
*@flags: active flags
*@width: width
*@precision: specification
*@size: Size
*Return: char printed
*/
int print_hexadecimal(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	return (print_hexa(types, "0123456789abcdef", buffer,
		flags, 'x', width, precision, size));
}

/**
* print_hexa_upper - upper hexadecimal notation
* @types: arguments
* @buffer: handle print
* @flags: active flags
* @width: width
* @precision: specification
* @size: Size
* Return: char printed
*/
int print_hexa_upper(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	return (print_hexa(types, "0123456789ABCDEF", buffer,
		flags, 'X', width, precision, size));
}

/**
*print_hexa - hexadecimal number in lower or upper
*@types: arguments
*@map_to: map the number to
*@buffer: handle print
*@flags: active flags
*@flag_ch: active flags
*@width: width
*@precision: specification
*@size: specifier
*@size: specification
*Return: char printed
*/
int print_hexa(va_list types, char map_to[], char buffer[],
	int flags, char flag_ch, int width, int precision, int size)
{
	int j = BUFF_SIZE - 2;
	unsigned long int num = va_arg(types, unsigned long int);
	unsigned long int init_num = num;

	UNUSED(width);

	num = convert_size_unsgnd(num, size);

	if (num == 0)
		buffer[j--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';

	while (num > 0)
	{
		buffer[j--] = map_to[num % 16];
		num /= 16;
	}

	if (flags & F_HASH && init_num != 0)
	{
		buffer[j--] = flag_ch;
		buffer[j--] = '0';
	}

	j++;

	return (write_unsgnd(0, j, buffer, flags, width, precision, size));
}
