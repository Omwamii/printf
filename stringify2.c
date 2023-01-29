#include "main.h"

/**
  *tostring2 - converts unsigned to string
  *@digit: number to be converted
  *@str: ptr to string to store num
  *
  *Return: ptr to str
  */

char *tostring2(unsigned long digit, char *str)
{
	int i = 0, j;
	char temp;

	while (digit > 0)
	{
		str[i++] = (digit % 10) + '0';
		digit /= 10;
	}

	str[i] = '\0';

	j = i - 1;
	i = 0;

	while (j > i)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}

	return (str);

}
