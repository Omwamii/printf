#include "main.h"

/**
  *tobinary - converts number to binary
  *@dec: variadic parameter passed
  *
  *Return: array of integers
  */
int *tobinary(unsigned int dec)
{
	int *bin, i = 0, num = dec, temp, j = 0;

	while (num > 0)
	{
		bin = malloc(sizeof(int));
		bin[i] = (num % 2);
		num /= 2;
		i++;
		bin++;
	}
	j = i - 1;
	i = 0;

	while (j > i)
	{
		temp = bin[i];
		bin[i] = bin[j];
		bin[j] = temp;
		i++;
		j--;
	}

	return (bin);
}
