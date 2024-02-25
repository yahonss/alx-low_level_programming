#include "main.h"

/**
 * flip_bits - returns number of flipping bits
 * @n1: number one
 * @n2: number two
 *Return: number of flipping bits
*/
unsigned int flip_bits(unsigned long int n1, unsigned long int n2)
{
	int i, counter = 0;
	unsigned long int act;
	unsigned long int exclu = n1 ^ n2;

	for (i = 63; i >= 0; i--)
	{
		act = exclu >> i;
		if (act & 1)
			counter++;
	}

	return (counter);
}


