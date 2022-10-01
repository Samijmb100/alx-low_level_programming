#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - function
 * @argc: param
 * @argv: param
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
