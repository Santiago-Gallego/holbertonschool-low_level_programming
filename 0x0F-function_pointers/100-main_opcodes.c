#include <stdio.h>
#include <stdlib.h>

/**
 * show_mem_rep - shows rep
 * @start: start of rep
 * @n: number of bytes
 */

void show(char *start, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%02hhx", start[i]);
		if (i < n - 1)
			printf(" ");
		else
			printf("\n");
	}
}


/**
 * main - prints out number of bytes of main function
 * @argc: int of arguements
 * @argv: list of arguements
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	show((char *)&main, num_bytes);
	return (0);
}
