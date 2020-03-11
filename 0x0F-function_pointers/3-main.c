#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - calculator
 * @argc: argument count
 * @argv: arguments
 * Return: operation
 */

int main(int argc, char *argv[])
{
	char *signo;
	char operador;
	int a, b, respuesta;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operador = argv[2][0];
	if ((operador != '*' && operador != '+' && operador != '-'
	     && operador != '/'  && operador != '%') || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if ((operador == '/' || operador == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	signo = argv[2];
	ptr = get_op_func(signo);
	respuesta = (*ptr)(a, b);
	printf("%d\n", respuesta);
	return (0);
}
