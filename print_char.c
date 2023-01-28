/**
  *print_char - prints character to stdout
  *@ch: variadic character param passed
  *
  *Return: characters printed
  */

int print_char(va_list ch)
{
	return (write(1, &ch, 1));
}
