#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

int _atoi(char *s)
{
	int l = 0, i = 0, neg = -1;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			neg *= -1;
		i++;
	}
	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
		l = (l * 10) - (s[i++] - '0');
	return (l * neg);
}


int _isNum(char *num)
{
	int i;

	for (i = 0; num[i] != '\0'; i++)
	{
		if (num[i] < '0' || num[i] > '9')
		{
			return (0);
		}
	}
	return (1);
}

int main(int argc, char *argv[])
{
	int i;

	if (argc != 3 || !(_isNum(argv[1])) || !(_isNum(argv[2])))
	{
		char *error = "Error";
		for (i = 0; error[i] != '\0'; i++)
			_putchar(error[i]);
		_putchar('\n');
		exit(98);
	}

	





	return(0);
