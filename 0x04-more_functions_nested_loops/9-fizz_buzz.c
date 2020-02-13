#include <stdio.h>
#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((num % 3 == 0) && (num % 5 != 0))
		{
			printf("Fizz ");
		}
		else if ((num % 3 != 0) && (num % 5 == 0))
		{
			if (num == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		}
		else
		{
			printf("%i ", num);
		}

	}
	printf("\n");
	return (0);

}
