#include <stdio.h>

/**
 * main - print number
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
