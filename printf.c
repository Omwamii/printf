#include "main.h"

/**
  *tobinary - converts decimal to binary
  *@dec: decimal number
  *Return: binary
  */

int *tobinary(int dec)
{
	int *bin, i = 0, num = dec;

	while (num > 0)
	{
		bin[i] = malloc(sizeof(int));
		bin[i] = (num % 2);
		num /= 2;
		i++;
	}

	return (bin);
}
/**
  *_printf - prints out any type of input
  *@format: format specified for input
  *
  *Return: characters printed
  */
int _printf(const char *format, ...)
{
	va_list input;
	int i = 0, count = 0; val;
	char newline = '\n', ch, *str;
	signed int dec, deci;
	unsigned int binary;

	va_start(input, format);

	if (format == NULL)
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					ch = va_arg(input, int);
					write(1, &ch, 1);
					count = 1;
					break;
				case 's':
				str = va_arg(input, char*);

				while (str[count] != '\0')
					{
						write(1, &str[count], 1);
						count++;
					}
					break;
				case '\n':
					write(1, &newline, 1);
					break;
				case 'i':
					dec = va_arg(input, signed int);
					write(1, &dec, sizeof(dec));
					break;
				case 'd':
					deci = va_arg(input, signed int);
					write(1, &deci, sizeof(deci));
					break;
				case 'b':
					binary = va_arg(input, unsigned int);
					dec = tobinary(binary);
					write(1, &dec, 1);
				default:
					break;
			}
			i++;
		}

		else
		{
			val = write(1, &format[i], 1);
			count += val;
			i++;
		}
	}
	va_end(input);
	return (count);
}

/**
  *main - entry point check
  */

int main(void)
{
	signed int c = -20;
	unsigned int b = 8;

	_printf("%b\n", b);
	_printf("The teacher said %i should see him today\n", c);

	return (0);
}
