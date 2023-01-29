#include "main.h"

/**
  *countnum - counts the number of characters in a number
  *@num: number
  *
  *Return: character size
  */

int countnum(int num)
{
	int nsave = num;
	int count = 0;

	while (nsave)
	{
		nsave /= 10;
		count++;
	}
	return (count);
}
