#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse using recursion
 * @s: string to be printed in reverse
 */
void _print_rev_recursion(char *s)
{
	int i;

	i = strlen(s);
	if (i == 0)
		return;
	_putchar(s[i - 1]);
	s[i - 1] = '\0';
	_print_rev_recursion(s);
}
