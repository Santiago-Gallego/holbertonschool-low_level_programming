#include <stdio.h>

/**
 * main - print all argument it receives, one per line
 * @argc: number of command line arguments
 * @argv: array containing command line arguments
 *
 * Return: 0 upon success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
