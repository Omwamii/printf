/**
  *print_char - prints character to stdout
  *@ch: variadic character param passed
  *
  *Return: characters printed
  */

int print_char(va_list ch)
{
	char c = (char)va_arg(ch, int);
	int count = 0;

	if (c)
	{
		count = write(1, &c, 1);
		return (count);
	}

	return (count);
}
