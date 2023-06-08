#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: the used number
 */
void print_binary(unsigned long int n)
{
	int i, counter = 0;
	unsigned long int act;

	for (i = 63; i >= 0; i--)
	{
		act  = n >> i;

		if (act & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}

