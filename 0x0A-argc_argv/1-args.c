#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - print the number of arguments passed into it
 * @argc: number of arguments
 * @argv: array containing arguments
 *
 * Return: 0 upon success
 */
int main(int argc, char *argv[])
{
	UNUSED(argv);

	printf("%d\n", argc - 1);
	return (0);
}
