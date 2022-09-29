#include "main.h"

/**
 * _puts_recursion - print a string in recursion
 * @s: string to be printed
 */
void _puts_recursion(char *s)
{
	if (strlen(s) == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(s[0]);
	_puts_recursion(s + 1);
}

