#include "main.h"

/**
 * _pow_recursion - computes the power of and integer using recursion
 * @x: an integer
 * @y: an integer
 * Return: the power of an integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(y - 1));
}
