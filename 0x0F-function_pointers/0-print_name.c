#include <stdio.h>
/**
 * print_name - prints
 * @name: name given
 * @f: function on how to print name;
 * Return: none;
 */
void print_name(char *name, void (*f)(char *))
{
	if(name == NULL || f == NULL)
		f(name);
}
