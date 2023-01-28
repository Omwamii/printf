#include "main.h"

/**
  *tobinary - converts number to binary
  *@dec: variadic parameter passed
  *
  *Return: array of integers
  */
int *tobinary(unsigned int dec)
{
	int *bin, i = 0, num = dec;

	while (num > 0)
	{
		bin = malloc(sizeof(int));
		bin[i] = (num % 2);
		num /= 2;
		i++;
		bin++;
	}

	return (bin);
}
