#include "holberton.h"
#include <stdio.h>
/**
* print_number - Entry point
* @n: number
* Return: Always 0 (Success)
*/
void print_number(int n)
{
	int length = 10;
	int number = n;

	if (n < 0)
		number = (-n);

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			_putchar('-');
			n = (-n);
		}
		for (; n > 0; n /= 100)
			length *= 10;
		for (n = length; n > 0; n /= 10)
		{
			if (!(n == length && ((number / n) % 10) == 0))
				_putchar('0' + (number / n) % 10);
		}
	}

}
