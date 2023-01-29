#include "main.h"

/**
*_printf - produce output according to format
*@format: string to be output
*...: other variables
*Return: number of characters that are printed out
 */
int _printf(const char *format, ...)
{
	int count;
	int (*f)(va_list) = NULL;
	va_list args;
	char buffer[BUFF_SIZE];
	int index = 0, printed = 0;

	count = 0;
	va_start(args, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		f = check_specifier(format);

		if (format != '%')
		{
			buffer[index++] = format[i];
			if (index == BUFF_SIZE)
				print_buffer(buffer, &index);

			count++;
		}

		else
		{
			print_buffer(buffer, &index);
			printed = f(args);
			if (printed == -1)
				return (-1);
			count += printed;
		}
	}

	print_buffer(buffer, &index);
	va_end(args);
	return (count);
}

/**
  *print_buffer - prints the buffer
  *@buffer: array of characters
  *@index: buffer index
  */

void print_buffer(char buffer[], int *index)
{
	if (*index > 0)
		write(1, buffer, *index);

	*index = 0;
}
