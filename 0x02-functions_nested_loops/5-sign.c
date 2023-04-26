#include "main.h"

/**
 *print_sign - function that prints the sign of a number
 * @n: The number that will be checked
 *Return: 1 for pos. num, -1 for neg. num or 0 for if num==0
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
