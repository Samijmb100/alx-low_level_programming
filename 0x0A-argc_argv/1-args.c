#include <stdio.h>
#include "main.h"

/**
 * main - prints argc
 * @argc: num
 * @argv: param
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%i\n", argc - 1);

	return (0);
}
