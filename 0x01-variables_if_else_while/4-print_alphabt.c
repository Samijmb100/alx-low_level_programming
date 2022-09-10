#include <stdio.h>

/**
 * main - Ommit some alphabeth
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;
	char q;
	char e;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != q || c != e)
			putchar(c);
	}
	putchar('\n');
	return (0);
}
