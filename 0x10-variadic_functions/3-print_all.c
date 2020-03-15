#include "variadic_functions.h"
/**
 * print_i - prints int
 * @list: arguement of list
 */
void print_i(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * print_c - prints char
 * @list: arguement char
 */
void print_c(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * print_s - prints string
 * @list: list to print
 */
void print_s(va_list list)
{
	char *s = va_arg(list, char *);

	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}
/**
 * print_f - prints floats
 * @list: next arguement of list to print
 */
void print_f(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * print_all - prints out all stuff
 * @format: format is list of types of arguements
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, j;
	fm_t fm[] = {{"c", print_c}, {"i", print_i}, {"f", print_f}, {"s", print_s},
		     {NULL, NULL}};
	char *sep = "";

	va_start(list, format);
	while (format[i] != '\0' && format != NULL)
	{
		j = 0;
		while (fm[j].fm != NULL)
		{
			if (format[i] == fm[j].fm[0])
			{
				printf("%s", sep);
				fm[j].p(list);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
