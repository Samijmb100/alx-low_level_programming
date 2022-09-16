#include "main.h"

/**
* print_number - Prints a number
* @n: The number to print
*/
void print_number(int n)
{
	if (n < 0)
	{
	_putchar(n / 10 + '0');
	_putchar(n % 10 + '0');
	}
	else if (n >= 0 && n <= 9)
	{
		_putchar(n);
	}
	else
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
}
