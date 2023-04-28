#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative  - print negative or positive or 0
 * @n: is the number to test
 * Return: void
 */

void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
}
