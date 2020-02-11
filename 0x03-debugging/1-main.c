#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	printf("Infinite loop avoided! \\o/\n");
	i = 10;

	while (i < 10)
	{
		putchar(i);
	}


	return (0);
}
