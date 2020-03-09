#include <stdio.h>
#ifndef __FILE__
#define __FILE__
#endif
/**
 * main - prints the file name  with a new line
 * Return: 0;
 */
int main(void)
{
	printf("%s\n",  __FILE__);
	return (0);
}
