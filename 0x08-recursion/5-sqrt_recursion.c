#include "main.h"

/**
 * find_sqrt - sub func
 * @num: param
 * @root: param
 * Return: int
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);
	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - main function
 * @n: parameter
 *Return: int
 */
int _sqrt_recursion(int n)
{
	int root;

	root = 0;
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);

	else if (n == 1)
		return (1);
	return (find_sqrt(n, root));
}

