#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a = '0';
while (a <= '9')
putchar(a++);
if (a <= '9')
putchar(',');
putchar(' ');
putchar('\n');
return (0);
}
