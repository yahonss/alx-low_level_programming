#include "main.h"

/**
 *_abs - computes the absolute value of an integer
 * @v: The value that will be computed
 *Return: 0 or the absolute value of the integer
 */

int _abs(int v)

{
	if (v < 0)
	{
	int integ_val;

	integ_val = v * -1;
	return (integ_val);
	}
	return (v);
}
