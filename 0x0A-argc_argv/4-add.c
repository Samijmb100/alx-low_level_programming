#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - function
 * @argc: param
 * @argv: param
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	if (argc == 1)
		printf("0\n");
	else if (argc >= 2)
	{
		for (i = 0; i < argc; i++)
		{
			if (atoi(argv[i]) >= 'a' && atoi(argv[i]) <= 'z')
			{
				printf("Error\n");
				return (1);
			}
			else
				sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
