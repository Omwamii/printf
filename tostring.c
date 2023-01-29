#include "main.h"

/**
  *tostring - converts number to string
  *@num: number to convert
  *@str: string to store num
  *Return: ptr to string
  */

char *tostring(int num, char *str)
{
	int i = 0, j = 0, isnegative = 0;
	char temp;

	if (num == 0)
	{
		str[i] = '0';
		str[i + 1] = '\0';
		return (str);
	}

	if (num < 0)
	{
		num = -num;
		isnegative = 1;
	}

	while (num > 0)
	{
		str[i++] = (num % 10) + '0';
		num /= 10;
	}

	if (isnegative)
	{
		str[i++] = '-';
	}
	str[i] = '\0';
	j = i - 1;
	i = 0;

	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}

	return (str);
}
